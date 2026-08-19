#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;
    int x;
    int n1 {0};
    int leader {0};
    int highest {0};
    
    vector<int>list_of_numbers(n); 
    for(int i {0}; i < n; i++){
        cin >> list_of_numbers[i];
    }
    
    for (int number : list_of_numbers) {
        if(highest < list_of_numbers[n1]){
            leader=leader+1;
            highest=list_of_numbers[n1];
            n1=n1+1;
        }else{
            n1=n1+1;
        }
    }
    cout << leader;
    return 0;
}
