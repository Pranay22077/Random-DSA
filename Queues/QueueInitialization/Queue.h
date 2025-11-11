#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>
class Queue {
public:
    int size;
    int *A;
    int p,q;

    Queue(int val) {
        size = val;
        A = new int[size];
        p = q = 0;
    }

    void enqueue(int num);
    int dequeue();
    void display();
    bool isFull();
    bool isEmpty();
    ~Queue() {
        delete[] A;
    }
};


#endif