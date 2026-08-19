#include <bits/stdc++.h>
using namespace std;
#define MAXN 200005
#define ll long long
string s;
ll n;
vector<char>snake{'S', 'N', 'A', 'K', 'E'};

bool possible(ll x){
  if(x == 0) return true;
  ll sn = 0;
  ll sp = 0;
  for(char ch : s){
    if(ch == snake[sp]) sn++;
    if(sn == x) sn = 0, sp++;
  }
  if(sp == 5) {
    return true;
  }
  return false;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cin >> n >> s;
    
    ll sp = 0, sn = 0;
    ll maxs = 0;
    ll c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0; 
    
    for(int i = 0; i < n; i++){
      if(s[i] == 'S') c1++;
      if(s[i] == 'N') c2++;
      if(s[i] == 'A') c3++;
      if(s[i] == 'K') c4++;
      if(s[i] == 'E') c5++;
    }
    maxs = min({c1, c2, c3, c4, c5});
    ll lo = 0, hi = maxs, res = 0;
    
    while(lo <= hi) {
      ll mid = (lo + hi)/2;
      if(possible(mid)){
        res = max(res, mid);
        lo = mid+1;
      }
      else{
        hi = mid-1;
      }
    }
    cout << res;
    return 0;
}

