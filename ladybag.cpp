#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    vector<int>nums(t);
    for(int i {0}; i < t; i++){
        cin >> nums[i];
    }
    sort(nums.begin(), nums.end());
    int ans = nums[t-1]-nums[0];
    cout << ans +1 << "\n";
}