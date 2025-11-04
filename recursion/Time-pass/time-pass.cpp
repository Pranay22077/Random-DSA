#include <iostream>
#include <string>
#include <math.h>
using namespace std;

enum days {monday = 10, tuesday, wednesday, thuuu};
struct rectangle{
    int length;
    int breadth;
    char height;
} r1;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int m = 10;
    int n = 20;
    cout << m << " and " << n;
    swap(m,n);
    cout << m << " and " << n;

}