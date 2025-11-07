#include <iostream>
using namespace std;

struct Stack{
    int size;
    int top;
    int *A;
}*p = new Stack; 

void push(int element){
    if (p -> top < p-> size - 1){
        p -> top ++;
        p -> A[p -> top] = element;
    } else {
        cout << "Stack overflow!";
    }
}

int pop(){
    if (p -> top >-1){
        int x = p -> A[p -> top];
        p -> top--;
        return x;
    }else{
        printf("Stack Empty!");
        return -1;
    }
}

void display() {
    cout << "\nCurrent Stack:\n";

    if (p->top == -1) {
        cout << "|   (empty)   |\n";
        cout << "---------\n";
        return;
    }

    for (int i = p->top; i >= 0; i--) {
        cout << "|   " << p->A[i] << "   |";
        if (i == p->top)
            cout << "  <-- Top";
        cout << endl;
    }

    cout << "---------" << endl;
}

int main(){
    cout << "enter the size of stack: ";
    cin >> p -> size;
    p -> A = new int[p -> size];
    p -> top = -1;

    push(5);
    push(4);
    push(2);
    push(7);
    display();

    pop();
    pop();
    display();
    return 0;
};