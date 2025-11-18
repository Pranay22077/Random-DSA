#include <iostream>
using namespace std;

int maxx(int A[], int elements){
    int max = A[0];
    for (int i = 0; i < elements-1; i++){
        max = (A[i+1] > max) ? A[i+1] : max;
    }
    return max;
}


int main(){
    int A[] = {0,3,7,4,9,12,6,1,11,2,10};
    int h = maxx(A, 9);
    int hash_table[13];
    for (int i = 1; i <= h; i++){hash_table[i] = 0;}

    for (int i = 1; i <= 10; i++){
        hash_table[A[i]] = A[i];
    }

    for (int i = 1; i < 13; i++){
        if (hash_table[i] == 0){
            cout << "Missing elements: " << i << endl;
        }
    }

    return 0;


}