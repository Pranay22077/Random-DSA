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
    bool isSorted(Node *p);
    bool issorted();
    void reverse();
    void interchange();
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

bool LinkedList :: isSorted(Node *pointer){
    Node *q = pointer -> next;
    while (q != nullptr){
        if (pointer -> data > q -> data){
            return false;
        }
        pointer = q;
        q = q -> next;
    }
    return true;
}

bool LinkedList :: issorted(){
    return isSorted(head);
}

void LinkedList :: reverse(){
    Node *p, *q, *r;
    p  = head;
    q = r = nullptr;
    while (p!= nullptr){
        q = p;
        r = q;
        p = p -> next;
        q -> next = r;
    }
    head = q;
}

// void LinkedList :: interchange(){
//     Queue q1(50);
//     Node *p, *q;
//     p = q = head;
//     while (q!= nullptr){
//         q1.enqueue(q);
//         q = q -> next;
//     }
//     while (p != q){
//         int temp = p -> data;
//         p -> data = q -> data;
//         q -> data = temp;
//         p = p -> next;
//         q = q1.dequeue();
//     }
// }

int main(){
    LinkedList list(5);
    int n;
    cout << "With how many elements, the list to be initializde?: ";
    cin >> n;
    list.Create(n);
    list.Display();
    if (list.issorted()){
        cout << "The list is sorted!\n"; 
    } else {
        cout << "The list is not sorted!";
    }
    list.reverse();
    list.Display();

    return 0;
}