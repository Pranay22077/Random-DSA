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
    int search();
    int Search(Node *p, int num);
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

int LinkedList :: Search(Node *p, int num){
    int count = 0;
    while (p != NULL){
        if (p -> data  == num){
            break;
        }
        count ++;
        p = p -> next;
    }
    return count;
}

int LinkedList :: search(){
    cout << "Enter the element to be searched: ";
    int key;
    cin >> key;
    Search(head, key);
}

int main(){
    LinkedList list(5);
    int n;
    cout << "How many elements to insert in the list: ";
    cin >> n;

    list.Create(n);
    list.Display();
    int index = list.search();
    cout << "The  element in the list is at node: " << index << "(considering, starting node is 0)" ;

    return 0;
}