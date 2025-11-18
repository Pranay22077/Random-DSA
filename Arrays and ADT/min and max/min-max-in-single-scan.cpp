#include <iostream>
using namespace std;

int main(){
    int A[] = {5,6,4,7,3,8,2,9};
    int bin = 0;
    int min = A[0], max = A[0];
    int size = sizeof(A)/ sizeof(A[0]);
    for (int i = 1; i < size; i++){
        if ((A[i] < min) ? min = A[i] : bin = -1){};
        if ((A[i] > max) ? max = A[i] : bin = -1){};
    }
    printf("Maximun element is %d and minimum element is %d", max, min);

    return 0;
}