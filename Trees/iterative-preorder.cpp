#include <iostream>
using namespace std;
#include "Queue.h"
#include <stack>

class BTree{
    public:
    Node *root,*p, *t;
    BTree();
    void Create();
    void Display();
    void Preorder(Node *p);
    void Postorder(Node *p);
    void Inorder(Node *p);
};

BTree :: BTree(){
    Create();
}

void BTree :: Preorder(Node *p){
    stack <Node *> s;
    p = root;
    while (!s.empty() || p != nullptr){
        if (p != nullptr){
            cout << p -> data << " ";
            s.push(p);
            p = p -> lchild;
        } else {
            p = s.top();
            s.pop();
            cout << p -> data << " ";
        }
    }
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
    cout << "Preorder traversal: " << endl;
    t.Preorder(t.root);
    cout << endl;

    return 0;
}