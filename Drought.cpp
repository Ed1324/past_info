#include <iostream>
#include <string>
#include <vector>
using namespace std;
//class Node {
//    public:
//    int value {0};
//    Node* next;
//    
//    Node (int val){
//        value = val;
//        next = nullptr;
//    }
//};
//class LinkedList {
//    public:
//    Node*head;
//    Node*ta//il;
//    LinkedList(int value){
//        Node* newNode = new Node(value);
//        head = newNode;
//        tail = newNode;
//    }
//};
//int main(){
//    
//}
//class S{
//    public:
//    int x;
//    S (){
//        x = 5;
//        cout << x << endl;
//    }
//};
int main(){
    int a {0};
    int b {0};
    int c {0};
    int d {0};
    int counter {0};
    cin >> a >> b;
    vector<int>days{};
    for (int i {0}; i < a; i++){
        cin >> c;
        days.push_back(c);
    }
    
    for (int a : days){
        if (d < b){
            d+=a;
            counter++;
        }
    }
    cout << counter;
}






