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
        head = nullptr;
    };
    void Create(int elements);
    void Display();
    void insert();
    void Insert(Node *p, int num);
    ~ LinkedList();
};

void LinkedList :: Create(int elements){
    Node *tail = nullptr;
    for (int i = 0; i < elements; i++) {
            int num;
            cout << "Enter element " << i + 1 << ": ";
            cin >> num;
            if (head == nullptr){
                head = new Node(num);
                tail = head;
            }else{
                Node *new_node = new Node(num);
                tail -> next = new_node;
                tail = new_node;
            }
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

void LinkedList :: Insert(Node *pointer, int num){
    Node *q = nullptr;
    while (pointer != nullptr){
        if (num < pointer -> data){
            break;
        }
        q = pointer;
        pointer = pointer -> next;
    }
    Node *temp = new Node(num);
    temp -> next = q -> next;
    q -> next = temp;
}

void LinkedList :: insert(){
    cout << "Enter the element to be inserted: ";
    int key;
    cin >> key;
    Insert(head, key);
}

int main(){
    LinkedList list(5);
    int n;
    cout << "With how many elements, the list to be initializde?: ";
    cin >> n;
    list.Create(n);
    list.Display();
    list.insert();
    cout << "A new node is inserted!\nList after new node-insertion: " << endl;
    list.Display();

    return 0;
}