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
        p = q = A - 1;
    }

    void enqueue(int num);
    void display();
    ~Queue() {
        delete[] A;
    }
};

void Queue::enqueue(int num) {
    if (q >= A + size - 1) {
        cout << "Queue overflow!" << endl;
        return;
    }
    q++;
    *q = num;
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
    Q.enqueue(11); 

    return 0;
}
