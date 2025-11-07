#include <iostream>
using namespace std;

class Queue{
    private:
    int size;
    int *A;
    public:
    int *p, *q;
    int top;
    Queue(int val){
        size = val;
        A = new int [size];
        top = -1;
        p = q = nullptr;
    }
    void enqueue(int num);
    void dequeue();
    bool isFull();
    bool isEmpty();

    ~ Queue(){
        delete []A;
        delete p;
        delete q;
    }
};
