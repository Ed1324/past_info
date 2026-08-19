#include <iostream>
using namespace std;

int main() {
    int vase1 {0};
    int vase2 {0};
    cin >> vase1 >> vase2;
    
    if ((vase1*vase2)%2 == 0){
        cout << (vase1*vase2);
    } else {
	cout << vase1*vase2 - 1;
    }
    return 0;
}
