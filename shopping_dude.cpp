#include <iostream>
using namespace std;
#include <string>
#include <vector>
class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        Node* next = nullptr;
    }
};
class LinkedList{
private:
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList(int value) {
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }
    ~LinkedList() {
        Node* temp = head;
        while (head) {
            head = head->next;
            delete temp;
            temp = head;
        }
    }
    void insert(int value){
        Node* newNode = new Node(value);
    if(length == 0){
            head = newNode;
            tail = newNode;
        }
        else{
            tail->next = newNode;
            tail = newNode;
        }
    } 
};


int main(){
// {
//     int a, b, c {0};
//     cin >> a >> b;
//     vector<int>list{};
//     for (int i {0}; i < a; i++){
//         cin>>c;
//         list.push_back(c);
//     }
//     int discounted {0};
//     vector<int> total {};
//     while(b != 0){
//         b--;
//         discounted = list[0];
//         total.push_back(discounted);
//         list.erase(list.begin());
//         list.erase(list.end());
//     }
//     int final {0};
//     for(int i {0}; i < total.size(); i++){
//         final += total[i];
//     }
    
//     vector<int>other_list{};
//     int other_final {0};
//     for(int i {0}; i < list.size(); i+=2){
//         if(list[i] <= list[i+1]){
//             other_list.push_back(list[i+1]);
//         }
//     }
//     for(int i {0}; i < other_list.size(); i++){
//         other_final+=other_list[i];
//     }
    
    
//     int real {0};
//     real = final + other_final;
//     cout << real;
    LinkedList myll;
    myll->insert(5);
    return 0;
}