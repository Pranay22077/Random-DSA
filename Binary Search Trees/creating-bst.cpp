#include <iostream>
using namespace std;
#include "Queue.h"

class BTree{
    public:
    Node *root,*p, *t;
    void Create();
    void Display();
    void Preorder(Node *p);
    void Postorder(Node *p);
    void Inorder(Node *p);
    void Search();
};

void BTree :: Preorder(Node *p){
    if (p){
        printf(" %d ", p->data);
        Preorder(p -> lchild);
        Preorder(p -> rchild);
    }
}

void BTree :: Postorder(Node *p){
    if (p){
        Preorder(p -> lchild);
        Preorder(p -> rchild);
        printf(" %d ", p->data);
    }
}

void BTree :: Inorder(Node *p){
    if (p){
        Inorder(p -> lchild);
        printf(" %d ", p->data);
        Inorder(p -> rchild);
    }
}

void BTree :: Create(){
    Node *p, *q;
    cout << "Enter root's value: ";
    int root_val;
    cin >> root_val;
    root = new Node(root_val);
    p = root;
    p -> lchild = p -> rchild = nullptr;
    q = nullptr;
    int val = root_val;
    while (true){
        cout << "Enter the value to be inserted (-1 to stop insertion): ";
        cin >> val;
        if (val == -1){
            break;
        }
        while (p != nullptr){

            if (val < p -> data){
                q = p;
                p = p -> lchild;
            } else if (val > p -> data){
                q = p;
                p = p -> rchild;
            };
        }
        Node *nn = new Node(val);
        if (val < q -> data){
            q -> lchild = nn;
        } else {
            q -> rchild = nn;
        }
        p = root;
        q = nullptr;
    }
}
int main(){
    BTree t;
    t.Create();
    cout << "Inorder traversal: " << endl;
    t.Inorder(t.root);
    cout << endl;

    return 0;
}