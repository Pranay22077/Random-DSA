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
    void Display();
    int max();
    int Max(Node *p);
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

void LinkedList :: Display(){
    Node *p = head;
    while (p != NULL){
        cout << p -> data << " --> ";
        p = p -> next;
    }
    cout << "NULL" << endl;
}

LinkedList :: ~LinkedList(){
    Node *temp;
    while(head != NULL){
        temp = head;
        head = head -> next;
        delete temp;
    }
}

int LinkedList :: Max(Node *p){
    int max = 0;
    while (p != NULL){
        if (p -> data > max){
            max = p->data;
        }
        p = p -> next;
    }
    return max;
}

int LinkedList :: max(){
    Max(head);
}

int main(){
    LinkedList list(5);
    int n;
    cout << "How many elements to insert in the list (after 5): ";
    cin >> n;

    list.Create(n);
    list.Display();
    int max = list.max();
    cout << "The maximum element in the list is: " << max ;

    return 0;
}