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
    public:
    int count = 0;
    Node *top;
    int size;
    Stack(int size){
        this -> size = size;
        top = nullptr;
    }
    void Push(int element);
    void Pop();
    void Display();
};

void Stack :: Push(int element){
    if (count < size){
        Node *nn = new Node(element);
        nn -> next = top;
        top = nn;
        count ++;
    } else{
        cout << "Stack overflow! \n";
    }
}

void Stack :: Pop(){
    top = top -> next;
    count --;
}

void Stack :: Display(){
    Node *p = top;
    while (p!= NULL){
        cout << "|   " << p -> data << "   |";
        if ( p == top){
            printf (" <-- Top");
        }
        cout << endl;
        p = p->next;
    }
    cout << "---------------\n";
}

int main(){
    Stack s(5);
    s.Push(5);
    s.Push(10);
    s.Display();
    s.Push(16);
    s.Push(15);
    s.Display();
    s.Pop();
    s.Display();
    s.Pop();
    s.Display();
    s.Pop();
    s.Pop();
    s.Display();
}