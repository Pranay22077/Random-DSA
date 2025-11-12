#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
class Node{
    public:
    int data;
    Node *lchild, *rchild;
    Node(int data){
        this -> data = data;
        lchild = rchild = nullptr;
    }
};

class Queue {
public:
    int size;
    Node* *A;
    int p,q;

    Queue(int val) {
        size = val;
        A = new Node*[size];
        p = q = 0;
    }

    void enqueue(Node* num);
    Node* dequeue();
    void display();
    bool isFull();
    bool isEmpty();
    ~Queue() {
        delete[] A;
    }
};


#endif