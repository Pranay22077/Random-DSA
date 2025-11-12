#include <iostream>
using namespace std;
#include "Queue.h"

bool Queue :: isFull(){
    return (q+1)% size == p;
}

bool Queue :: isEmpty(){
    return p == q;
}

void Queue :: enqueue(Node* num) {
    if (isFull()) {
        cout << "Queue overflow!" << endl;
        return;
    }
    q = (q+1)%size;
    A[q] = num;
}

Node* Queue :: dequeue(){
    if (isEmpty()){
        cout  << "Can't perform Dequeue operation, Stack underflow!";
        return nullptr;
    } else {
        p = (p+1)%size;
        Node* deq = A[p];
        A[p] = NULL;
        return deq;
    }
}

void Queue::display() {
    if (isEmpty()) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "\nQueue State:\nFront --> ";
    int i = (p + 1) % size;
    while (i != (q + 1) % size) {
        cout << "| " << A[i] << " | ";
        i = (i + 1) % size;
    }
    cout << "<-- Rear\n";
}