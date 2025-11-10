#include <iostream>
using namespace std;
#include "Queue.h"

class BTree{
    public:
    Node *root,*p, *t;
    BTree();
    void Create();
    void Display();
};

BTree :: BTree(){
    Create();
}

void BTree :: Create(){
    Queue q(100);
    cout << "Enter the value of root: ";
    int num;
    cin >> num;
    root = new Node(num);
    root -> lchild = root -> rchild = nullptr;
    q.enqueue(root);
    while (!q.isEmpty()) {
        p = q.dequeue();
        cout << "Enter l-child's value for " << p -> data << " (-1 for no value): ";
        int lchild;
        cin >> lchild;
        if (lchild != -1){
            t = new Node(lchild);
            t -> lchild = t -> rchild = nullptr;
            p -> lchild = t;
            q.enqueue(t);
            }
        
        cout << "Enter r-child's value for " << p -> data << " (-1 for no value): ";
        int rchild;
        cin >> rchild;
        if (rchild != -1){
            t = new Node(rchild);
            t -> lchild = t -> rchild = nullptr;
            p -> rchild = t;
            q.enqueue(t);
            }
        
    }
}

int main(){
    BTree t;
    return 0;
}