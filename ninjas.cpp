#include <iostream>
using namespace std;

int main()
{
    int amount_of_ninjas;
    int ninjas_that_snuck_in;
    int count {0};
    int cycles {0};
    
    cin >> amount_of_ninjas >> ninjas_that_snuck_in;
    while(count < amount_of_ninjas){
        count = count+(ninjas_that_snuck_in+1);
        cycles = cycles+1;
    }
    cout << amount_of_ninjas-cycles << endl;
    return 0;
}