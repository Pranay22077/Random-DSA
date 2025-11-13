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
    void Insert();
    ~LinkedList(){
        delete head;
    }
};

void LinkedList :: Create(){
    Node *p = nullptr;
    cout << "Enter the number of elements in the doubly linked-list: ";
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
            temp -> prev = p;
            p = p -> next;
        }
    }
}

void LinkedList :: Insert(){
    cout << "Enter the element to be inserted: ";
    int element;
    cin >> element;

    cout << "Enter the position at which it's to be inserted (starting index: 0): ";
    int pos;
    cin >> pos;

    Node *nn = new Node(element);
    
    Node *p = head;
    for (int i = 0; i < pos - 1; i++){
        p = p -> next;
    }
    nn -> next = p -> next;
    nn -> next -> prev = nn;

    p -> next = nn;
    nn -> prev = p;
    }

void LinkedList :: Display(){
    Node *ptr = head;
    while (ptr != nullptr){
        cout << ptr -> data << " <--> ";
        ptr = ptr -> next;
    }
    cout << "NULL";
}

int main(){
    LinkedList list;
    list.Create();
    list.Display();

    list.Insert();
    list.Display();

    return 0;
}
