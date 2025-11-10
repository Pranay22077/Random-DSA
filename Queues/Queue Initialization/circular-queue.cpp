#include <iostream>
using namespace std;

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

bool Queue :: isFull(){
    return (q+1)% size == p;
}

bool Queue :: isEmpty(){
    return p == q;
}

void Queue :: enqueue(int num) {
    if (isFull()) {
        cout << "Queue overflow!" << endl;
        return;
    }
    q = (q+1)%size;
    A[q] = num;
}

int Queue :: dequeue(){
    if (isEmpty()){
        cout  << "Can't perform Dequeue operation, Stack underflow!";
        return -1;
    } else {
        p = (p+1)%size;
        int deq = A[p];
        A[p] = -1;
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


int main() {
    Queue Q(5);
    
    Q.enqueue(2);
    Q.enqueue(3);
    Q.display();

    Q.enqueue(7);
    Q.enqueue(5);
    Q.display();

    Q.enqueue(9);
    Q.display();

    Q.enqueue(11); 
    Q.display();

    Q.dequeue();
    Q.display();

    Q.dequeue();
    Q.display();

    Q.dequeue();
    Q.display();

    Q.dequeue();
    Q.display();

    Q.dequeue();
    Q.display();

    Q.dequeue();
    Q.display();

    Q.enqueue(5);
    Q.display();
    Q.enqueue(10);
    Q.display();

    return 0;
}
