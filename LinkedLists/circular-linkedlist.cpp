#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;
    Node(int data){
        this -> data = data;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node *head = nullptr;
    LinkedList();
    void Create();
    void Display();
    ~LinkedList(){
        delete head;
    }
};

void LinkedList :: Create(){
    Node *p = nullptr;
    cout << "Enter the number of elements in the circular linked-list: ";
    int num;
    cin >> num;
    for (int i = 0; i<num; i++){
        Node* temp = new Node(num);
        if (head == nullptr){
            head = temp;
            head -> next = nullptr;
            p = head;
        } else {
            p -> next = temp;
            p = temp;
        }
    }
    p -> next = head;
}

void LinkedList :: Display(){
    Node *ptr = head;
    do{
        cout << ptr -> data << " --> ";
    } while (ptr != head);
    cout << "NULL";
}