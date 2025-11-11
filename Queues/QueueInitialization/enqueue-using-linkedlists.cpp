#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int data){
        this -> data = data;
        next = nullptr;
    }
};

class LinkedList{
    public:
    Node *front = nullptr, *rear = nullptr;
    LinkedList();
    void Create(int size);
    void Display();
    void enqueue(int element);
    int dequeue();
};

LinkedList :: LinkedList(){
    int size;
    cout << "Enter the size of List to be created: ";
    cin >> size;
    Create(size);
    cout << "----Queue created successfully----\n";
}

void LinkedList :: Create(int size){
    for (int i = 0; i< size; i++){
        int temp;
        cout << "Enter element " << i+1 << ": ";
        cin >> temp;
        Node *nn = new Node(temp);
        if (front == nullptr){
            front = nn;
            rear = nn;
            front -> next = nullptr;
        } else {
            rear -> next = nn;
            rear = nn;
        }
    }
}

void LinkedList :: enqueue(int element){
    Node *temp = new Node(element);
    if (temp == nullptr){
        cout << "Queue is full!";
    } else{
        rear -> next = temp;
        rear = temp;
    }
}

void LinkedList::Display() {
    Node *ptr = front;

    if (ptr == nullptr) {
        cout << "Queue is empty\n";
        return;
    }

    cout << "Front --> |";

    while (ptr != nullptr) {
        cout << ptr->data;

        if (ptr->next != nullptr)
            cout << " -> "; 

        ptr = ptr->next;
    }

    cout << "| <-- Rear" << endl;
}


int main(){
    LinkedList list;
    list.Display();

    list.enqueue(67);
    list.Display();

    list.enqueue(89);
    list.Display();
}