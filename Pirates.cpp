#include <iostream>
using namespace std;

int main() {
    int L, X, Y;
    cin >> L >> X >> Y; 
    if(X+Y < (L-X)+(L-Y)){
        cout << X+Y << endl;
    } else {
        cout << (L-X)+(L-Y) << endl;
    }
    
    
    return 0;
}
