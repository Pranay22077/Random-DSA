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
    void Insert(Node *p, int num, int node);
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

void LinkedList :: Insert(Node *p, int num, int node){
    for (int i = 0; i<node-1; i++){
        p = p->next;
    }
    Node *temp = new Node(num);
    temp -> next = p -> next;
    p -> next = temp;

}

void LinkedList :: insert(){
    cout << "Enter the element to be inserted: ";
    int key;
    cin >> key;

    cout << "Enter the node at which, the element needs to be inserted (starting nodes at index 0): ";
    int node;
    cin >> node;
    Insert(head, key, node);
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