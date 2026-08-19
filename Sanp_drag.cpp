#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, k, ry, rx, sy, sx;
    cin >> n >> k >> ry >> rx >> sy >> sx;
    
    int distance1 = abs(ry - sy);
    int distance2 = abs(rx-sx);
    int distance = distance1+distance2;
    if(distance % 2 == 1){
        cout << "ROSE";
    } else {
        cout << "SCARLET";
    }
}