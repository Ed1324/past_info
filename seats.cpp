#include <iostream>
using namespace std;
int main(void) {
	int rows {0};
	int seats_per_row {0};
	int people {0};
	
	cin >> seats_per_row >> rows >> people;
	if (people > rows*seats_per_row){
		cout << rows*seats_per_row << " " << people - rows*seats_per_row << endl;
	} else{
		cout << people << " 0" << endl;
	}
    return 0;
}