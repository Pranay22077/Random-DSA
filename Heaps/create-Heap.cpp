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
    int H[] = {0, 40, 25, 10, 15, 30, 5, 35};
    int size = sizeof(A)/ sizeof(A[0]);
    for (int i = 2; i< size; i++){
        Insert(H, i);
    }
    for (int i = 1; i< size; i++){
        cout << H[i] << " ";
    }

}
