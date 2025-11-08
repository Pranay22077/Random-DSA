#include <iostream>
using namespace std;

class Queue {
public:
    int size;
    int *A;
    int *p, *q;

    Queue(int val) {
        size = val;
        A = new int[size];
        p = q = A;
    }

    void enqueue(int num);
    int dequeue();
    void display();
    ~Queue() {
        delete[] A;
    }
};

void Queue::enqueue(int num) {
    if ((*(q + 1)%size) + 1 == *p) {
        cout << "Queue overflow!" << endl;
        return;
    }
    q++;
    *q = num;
}

int Queue :: dequeue(){
    if (q == p){
        cout  << "Can't perform Dequeue operation, Stack underflow!";
        return -1;
    } else {
        int deq = *(p+1);
        *(p+1) = -1;
        p++;
        return deq;
    }
}

void Queue::display() {
    if (q == p) {
        cout << "Queue is empty!" << endl;
        return;
    }

    cout << "\nQueue State:\n";
    for (int *temp = p + 1; temp <= q; temp++) {
        if (temp == p + 1)
            cout << "Front -->  | ";
        cout <<*temp << " |  ";
        if (temp == q)
            cout << "<-- Rear";
    }
    cout << endl;
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
