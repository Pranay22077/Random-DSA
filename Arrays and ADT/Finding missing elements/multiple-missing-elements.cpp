#include <iostream>
#include <math.h>
using namespace std;

int main(){
    int A[] = {6,7,8,9,11,12,15,16,17,18,19};
    int diff = A[0];
    for (int i = 1; i < 11; i++){
        int diff_curr = A[i] - i;
        if (diff_curr != diff){
            int iter = abs(diff_curr - diff);
            for (int j = 0; j < iter; j++){
                cout << "The missing element is: " << diff + i + j << endl;
            }
            diff = diff_curr;
        }

    }
}