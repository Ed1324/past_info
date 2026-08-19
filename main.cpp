#include <bits/stdc++.h>

using namespace std;
#define ll long long
#define ld long double

const int MAX_N = 1e5 + 5;
const ll MOD = 1e9 + 7;
const ll INF = 1e9;
const ld EPS = 1e-9;


int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    ll t;
    cin >> t;
    while(t--){
        ll leng;
        cin >> leng;
        string a;
        cin >> a;
        vector<ll>arr;
        
        for(int i = 0; i < leng; i++){
            if(a[i] == '*') arr.push_back(i);
        }
        for(auto l : arr){
            cout << l << " ";
        }
    }
    return 0;
}