#include <iostream>
#include <string>
using namespace std;
class Node{
    public:
    char data;
    Node *next;
    Node(char val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    int count = 0;
    Node *top;
    int size;
    Stack(int size){
        this -> size = size;
        top = nullptr;
    }
    void Push(char element);
    void Pop();
    void Display();
    bool isEmpty();
};

void Stack :: Push(char element){
    if (count < size){
        Node *nn = new Node(element);
        nn -> next = top;
        top = nn;
        count ++;
    } else{
        cout << "Stack overflow! \n";
    }
}
void Stack :: Pop(){
    top = top -> next;
    count --;
}

bool Stack :: isEmpty(){
    return top == nullptr;
}
void Stack :: Display(){
    Node *p = top;
    while (p!= NULL){
        cout << "|   " << p -> data << "   |";
        if ( p == top){
            printf (" <-- Top");
        }
        cout << endl;
        p = p->next;
    }
    cout << "---------------\n";
}

int main(){
    Stack s(20);
    string str;
    cout << "Enter an expression: ";
    getline(cin, str);
    for (int i = 0; str[i] != '\0'; i++){
        if (str[i] == '('){
            s.Push(str[i]);
        } else if (str[i] == ')'){
            s.Pop();
        }
    }
    if (s.isEmpty()){
        cout << "The expression is valid!";
    } else {
        cout << "Invalid Expression";
    }

    return 0;
}