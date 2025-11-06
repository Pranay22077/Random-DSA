#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    private:
    Node *top;
    int size;
    Node *n;
    Stack(int size){
        this -> size = size;
    }
    void Push(int element);
    void Pop();
    void Display();
    ~ Stack();
};

void Stack :: Push(int element){
    if (top != nullptr){
        Node *nn = new Node(element);
        nn -> next = top;
        top = nn;
    } else{
        cout << "Stack overflow!";
    }
}