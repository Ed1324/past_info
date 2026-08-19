#include <iostream>
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;  // Read input values

    // Calculate the number of ninjas that are caught
    int caught_ninjas = N / (1 + K);

    // Calculate the number of ninjas that sneak past
    int sneaked_ninjas = N - caught_ninjas;

    // Print the result
    cout << sneaked_ninjas << endl;

    return 0;
}
