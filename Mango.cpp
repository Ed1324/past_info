#include <iostream>
using namespace std;
int main()
{
    int Isnag, Cleman, distanceA, distanceB {0};
    cin >> Isnag >> Cleman >> distanceA >> distanceB;

	if (Isnag-distanceA==Cleman-distanceB||Isnag-distanceA==Cleman+distanceB) cout<<Isnag-distanceA;
	else cout<<Isnag+distanceA;
}