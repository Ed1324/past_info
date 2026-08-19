#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> prices(n);
    for (int i = 0; i < n; ++i)
        cin >> prices[i];

    int left = 0;
    int right = n - 1;
    int total_cost = 0;
    for (int i = 0; i < k; ++i) {
        total_cost += prices[left]; 
        left++;
        right--;
    }
    while (left < right) {
        total_cost += prices[right];
        right-=2;
    }

    cout << total_cost << endl;
    return 0;
}