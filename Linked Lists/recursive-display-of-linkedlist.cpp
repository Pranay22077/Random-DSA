#include <iostream>
using namespace std;

class Node{
    public: 
    int data;
    Node *next;

    Node(int val){
        data = val;
        next = nullptr;
    }
};

class LinkedList{
    private:
    Node *head;

    public:
    LinkedList(int first){
        head = new Node(first);
    };
    void Create(int elements);
    void RDisplay(Node *p);
    void Display();
    ~ LinkedList();
};

void LinkedList :: Create(int elements){
    Node *tail = head;
    for (int i = 0; i < elements; i++) {
            int num;
            cout << "Enter element " << i + 1 << ": ";
            cin >> num;
            Node *new_node = new Node(num);
            tail -> next = new_node;
            tail = new_node;
    }
};

void LinkedList :: RDisplay(Node *ptr){
    if (ptr != NULL){
        cout << ptr->data << "-->";
        RDisplay(ptr -> next);
    }else{
        cout << "NULL" << endl;
    }
}

void LinkedList :: Display(){
    RDisplay(head);
}
LinkedList :: ~LinkedList(){
    Node *temp;
    while(head != NULL){
        temp = head;
        head = head -> next;
        delete temp;
    }
}

int main(){
    LinkedList list(5);
    int n;
    cout << "How many elements to insert in the list (after 5): ";
    cin >> n;

    list.Create(n);
    list.Display();

    return 0;
}