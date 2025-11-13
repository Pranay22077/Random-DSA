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
        ptr = ptr -> next;
    } while (ptr != head);
    cout << ptr -> data ;
    cout << "(Reached Head!)";
}

int main(){
    LinkedList list;
    list.Create();
    list.Display();
}