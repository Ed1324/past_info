#include <iostream>
#include <vector>
using namespace std;

int main() {
    int vase1 {1};
    int vase2 {2};
    int vase3 {0};
    int flowers {0};

    cin >> flowers;
    vase3 = flowers - 3;
    if (flowers < 6){
        cout << "0 0 0" << endl;
    } else {
        cout << vase1 << " " << vase2 << " " << vase3 << endl; 
    }

    return 0;
}
