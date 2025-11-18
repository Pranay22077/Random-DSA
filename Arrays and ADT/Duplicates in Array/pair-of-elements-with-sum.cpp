#include <iostream>
using namespace std;

int main(){
    int A[] = {3,5,6,7,9,2,1,8,4};
    int sum;
    cout << "Enter the sum whose pair you need: ";
    cin >> sum;
    for (int i = 0; i < sizeof(A)/sizeof(A[0]); i++){
        for (int j = i+1; j < sizeof(A)/ sizeof(A[0]);j++){
            if (A[j] == sum - A[i]){
                printf("Found elements %d and %d whose sum is %d\n", A[i], A[j], sum);
            }
        }
    }

    return 0;
}