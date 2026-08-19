import cv2
import mediapipe as mp

# Setup MediaPipe
mpHands = mp.solutions.hands
hands = mpHands.Hands(max_num_hands=1)  # Detect one hand
mpDraw = mp.solutions.drawing_utils

# Tip landmarks for each finger
finger_tips = [4, 8, 12, 16, 20]  # Thumb, Index, Middle, Ring, Pinky

# Open camera
cap = cv2.VideoCapture(0)

while True:
    success, img = cap.read()
    if not success:
        break

    # Convert image to RGB for MediaPipe
    imgRGB = cv2.cvtColor(img, cv2.COLOR_BGR2RGB)
    results = hands.process(imgRGB)

    finger_count = 0

    if results.multi_hand_landmarks:
        for handLms in results.multi_hand_landmarks:
            lmList = []
            for id, lm in enumerate(handLms.landmark):
                h, w, _ = img.shape
                lmList.append((int(lm.x * w), int(lm.y * h)))

            # Thumb
            if lmList[finger_tips[0]][0] > lmList[finger_tips[0] - 1][0]:
                finger_count += 1
            # Other fingers
            for tip in finger_tips[1:]:
                if lmList[tip][1] < lmList[tip - 2][1]:
                    finger_count += 1

            mpDraw.draw_landmarks(img, handLms, mpHands.HAND_CONNECTIONS)

    # Display the count
    cv2.putText(img, f'Fingers: {finger_count}', (10, 70),
                cv2.FONT_HERSHEY_SIMPLEX, 1.8, (0, 255, 0), 3)

    cv2.imshow("Finger Counter", img)
    if cv2.waitKey(1) & 0xFF == 27:
        break

cap.release()
cv2.destroyAllWindows()
