#include <iostream>
using namespace std;

class Queue{
    public:
    int size;
    int *A;
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

    ~ Queue(){
        delete []A;
        delete p;
        delete q;
    }
};
