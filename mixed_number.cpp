#include <iostream>
using namespace std;

int main()
{
    int amount_of_ninjas;
    int ninjas_that_snuck_in;
    
    cin >> amount_of_ninjas >> ninjas_that_snuck_in;
    
    if (ninjas_that_snuck_in > 1){
        cout << amount_of_ninjas - (amount_of_ninjas/ninjas_that_snuck_in) << endl;
    } else {
        cout << amount_of_ninjas/2 << endl;
    }
    return 0;
}