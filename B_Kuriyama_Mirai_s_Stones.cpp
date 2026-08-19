#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
#define int long long
#define endl "\n"

void solve(){
    int n,p=0;cin>>n;
    vector<int>og, pref, prefog;
    prefog.push_back(0);
    pref.push_back(0);
    for(int i=0;i<n;i++){
        int num;cin>>num;
        p+=num;
        prefog.push_back(p);
        og.push_back(num);
    }
    p=0;
    sort(og.begin(),og.end());
    for(int i=0;i<n;i++){
        pref.push_back(p);
        p+=og[i];
    }
    for(auto k : pref) cout << k << " ";
}

signed main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    solve();
    return 0;
}

