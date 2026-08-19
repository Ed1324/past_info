t = int(input())
for _ in range(t):
    n = int(input())
    grid = []
    for _ in range(n):
        row = list(map(int, input().split()))
        grid.append(row)
    
    max_s = 2 * n
    p = [0] * (max_s + 1)  # p[0] unused, p[1..2n]
    
    for i in range(n):
        for j in range(n):
            s = (i + 1) + (j + 1)
            if p[s] == 0:
                p[s] = grid[i][j]
    
    # Find the missing number which is p1
    existing = set(p[2:max_s + 1])
    all_numbers = set(range(1, 2 * n + 1))
    p1 = (all_numbers - existing).pop()
    
    # Prepare the result
    result = [p1] + p[2:2 * n + 1]
    print(' '.join(map(str, result)))