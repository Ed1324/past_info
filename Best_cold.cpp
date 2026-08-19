#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric> // Include this for accumulate

using namespace std;

int main() {
    int n;
    cin >> n;
    
    vector<int> data(n);
    for (int i {0}; i < n; i++) {
        cin >> data[i];
    }
    
    int minimum = *min_element(data.begin(), data.end());
    int maximum = *max_element(data.begin(), data.end());
    int mean = accumulate(data.begin(), data.end(), 0) / n; // Integer division rounds down
    
    cout << minimum << " " << maximum << " " << mean << endl;
    return 0;
}
