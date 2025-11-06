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
    int sum();
    int Sum(Node *p);
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

int LinkedList :: Sum(Node *p){
    int sum = 0;
    while (p != NULL){
        sum = sum + p->data;
        p = p->next;
    }
    return sum;
}

int LinkedList :: sum(){
    Sum(head);
}

int main(){
    LinkedList list(5);
    int n;
    cout << "How many elements to insert in the list (after 5): ";
    cin >> n;

    list.Create(n);
    list.Display();
    int sum = list.sum();
    cout << "The sum of elements in the list are: " << sum ;

    return 0;
}