#include <iostream>
#include "Queue.h"
using namespace std;

int main(){
    Queue q(5);
    q.enqueue(80);
    q.enqueue(87);
    q.display();

    q.dequeue();
    q.display();
}