#include <iostream>
#include <algorithm>
#include <vector> 
#include <string>
using namespace std;

int main() {
    int d, k;
    cin >> d;
    int streak {0};
    for(int i {0}; i < d; i++){
        cin >> k;
        if(k == 0){
            streak++;
        } else{
            streak = 0;
        }
    }
    cout << streak;
    return 0;
}
