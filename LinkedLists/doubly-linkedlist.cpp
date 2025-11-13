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

void LinkedList :: Create(){
    Node *p = nullptr;
    cout << "Enter the number of elements in the circular linked-list: ";
    int num;
    cin >> num;
    for (int i = 0; i<num; i++){
        cout << "Enter element "<< i+1 << ": ";
        int temp_data;
        cin >> temp_data;
        Node* temp = new Node(temp_data);
        if (head == nullptr){
            head = temp;
            head -> next = head -> prev = nullptr;
            p = head;
        } else {
            p -> next = temp;
            p -> next -> prev = p;
        }
    }
}

void LinkedList :: Display(){
    Node *ptr = head;
    while (ptr != nullptr){
        cout << ptr -> data << " --> ";
        ptr = ptr -> next;
    }
    cout << "NULL";
}
