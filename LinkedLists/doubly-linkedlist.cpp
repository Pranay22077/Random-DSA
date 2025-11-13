#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next, *prev;
    Node(int data){
        this -> data = data;
        next = prev = nullptr;
    }
};

class LinkedList{
    public:
    Node *head = nullptr;
    void Create();
    void Display();
    ~LinkedList(){
        delete head;
    }
};
