#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;
#include "Queue.h"
class Stack{
    public: 
    int top;
    int size;
    Node **A;
    Stack(int size){
        this -> size - size;
        top = -1;
        A = new Node*[size];
    }
    void push(int element);
    Node * pop();
    bool isEmpty(){
        return top == -1;
    }
    bool isFull(){
        return top == size-1;
    }
    ~Stack(){
        delete []A;
    }
};

#endif