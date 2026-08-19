#include <iostream>
#include <algorithm>
#include <vector> 
#include <string>
using namespace std;

int main() {
    int d, w;
    int c;
    cin >> d >> w;
    vector<int>nums{};
    vector<int>dict{};
    vector<int>words_to_look_up{};
    for (int i {0}; i < d; i++){
        cin >> c;
        nums.push_back(c);
        cin >> c;
        dict.push_back(c);
    }
    for(int i {0}; i < w; i++){
        cin >> c;
        words_to_look_up.push_back(c);
    }
    for(auto a : words_to_look_up){
        bool found {false};
        for(int i {0}; i < d; i++){
            if(a == nums[i]){
                cout << dict[i] << "\n";
                found = true;
            }
        }
        if(found == false){
            cout << "C?" << endl;
        }
    }
    return 0;
}
