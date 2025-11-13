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
    void Insert();
    void Delete();
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
            head -> next = head;
            p = head;
        } else {
            p -> next = temp;
            p = temp;
        }
    }
    p -> next = head;
}

void LinkedList :: Insert(){
    cout << "Enter the element to be inserted: ";
    int element;
    cin >> element;

    cout << "Enter the position at which it's to be inserted (starting index: 0): ";
    int pos;
    cin >> pos;

    Node *nn = new Node(element);
    if (pos == 0){
        nn -> next = head -> next;
        head = nn;
    } else {
        Node *p = head;
        for (int i = 0; i < pos - 1; i++){
            p = p -> next;
        }
        nn -> next = p -> next;
        p -> next = nn;

    }
}

void LinkedList :: Delete(){
    cout << "Enter the position at which the element needs to be deleted (starting index: 0): ";
    int pos;
    cin >> pos;
    Node*p=  head;
    for (int i = 0; i < pos-1; i++){
        p = p -> next;
    }
    p -> next = p -> next -> next;

}

void LinkedList :: Display(){
    Node *ptr = head;
    do{
        cout << ptr -> data << " --> ";
        ptr = ptr -> next;
    } while (ptr != head);
    cout << "(Reached Head!)";
}

int main(){
    LinkedList list;
    list.Create();
    list.Display();

    list.Insert();
    list.Display();

    list.Delete();
    list.Display();
}