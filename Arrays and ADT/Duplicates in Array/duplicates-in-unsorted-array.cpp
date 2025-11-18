#include <iostream>
using namespace std;

int main(){
    int A[] = {8,3,6,4,6,5,6,8,2,7,5,8,3,3,3,3,3};
    int size = sizeof(A)/ sizeof(A[0]);
    for (int i = 0; i < size; i++){
        int count = 0;
        for (int j = i + 1; j < size; j++){
            if (A[i] != -1){
                if (A[j] == A[i]){
                    A[j] = -1;
                    count ++;
                }
                
            }
        }
        if (count > 0){
                printf("Element %d is repeated %d times\n", A[i], count);
            }
    }
    return 0;
}