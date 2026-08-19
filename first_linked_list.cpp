#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include <vector>

class Node{
public:
    int value;
    Node* next;
    Node(int value){
        this->value = value;
        next = nullptr;
    }
};
class LinkedList{
private:
    Node* head;
    Node* tail;
    int length;
public:
    LinkedList(int value){
        Node* newNode = new Node(value);
        head = newNode;
        tail = newNode;
        length = 1;
    }
    
    void print(){
        Node* temp = head;
        while(temp){
            cout << temp->value << "->";
            temp = temp->next;
        }
    }
    
    void append(int value){
        Node* newNode = new Node(value);
        tail->next = newNode;
        tail = tail->next;
        length++;
    }
};

int main(){
    int a, b {0};
    cin >> a >> b;
    LinkedList mull(b);
    for(int i {0}; i < a-1; i++){
        cin >> b;
        mull.append(b);
    }
    mull.print();
    return 0;
}