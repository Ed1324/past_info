#include <iostream>
using namespace std;
int main()
{
    int Isnag, Cleman, distanceA, distanceB {0};
    cin >> Isnag >> Cleman >> distanceA >> distanceB;

    if (Isnag >= Cleman){
        cout << Isnag-distanceA;
    }
    else{
        cout << Cleman-distanceB;
    }
    
}