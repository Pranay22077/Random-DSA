#include <iostream>
using namespace std;

void Insert(int A[], int n){
    int i = n, temp;
    temp = A[i];
    while ( i>1 && temp > A[i/2]){
        A[i] = A[i/2];
        i = i/2;
    }
    A[i] = temp;
}

int main(){
    int H[] = {0, 40, 25, 10, 15, 30, 35, 5};
    for (int i = 2; i< 8; i++){
        Insert(H, i);
    }
    for (int i = 1; i< 8; i++){
        cout << H[i] << " ";
    }

}