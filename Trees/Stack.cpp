#include <iostream>
#include "Stack.h"
using namespace std;

void Stack :: push(Node* element){
    top++;
    A[top] = element;
}

Node* Stack :: pop(){
    Node* temp = A[top];
    top --;
    return temp;
}