#include <iostream>
using namespace std;

int main(){
    int cycles {0};
    int integer {0};
    cin >> integer;
    while (cycles != integer){
        cycles = cycles+1;
        cout << cycles << '\n';
    }
}