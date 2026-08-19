#include <iostream>
using namespace std;
#include <string>
#include <cstring>
#include <vector>

class Heap{
private:
    vector<int>heap{};
    int rightchild(int index){
        return 2*index + 2;
    }
    int leftchild(int index){
        return 2*index + 1;
    }
    void swap(int index1, int index2){
        int temp = heap[index1];
        heap[index1] = heap[index2];
        heap[index2] = temp;
    }
    int parent(int index){
        return (index-1)/2;
    }
public:
    void print(){
        cout << "[";
        for(auto a : heap){
            cout << a << ", ";
        }
        cout << "]";
    }
    
    void insert(int value){
        heap.push_back(value);
        int current = heap.size() - 1;
        while(current > 0 && heap[current] > heap[parent(current)]){
            swap(current, parent(current));
        }
    }
};
int main(){
    int n, k;
    cin >> n;
    Heap myheap;
    for (int i {0}; i < n; i++){
        cin >> k;
        myheap.insert(k);
    }
    myheap.print();
    return 0;
}