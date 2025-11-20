#include <iostream>
using namespace std;

void bubble_sort(int A[], int size){
    cout << size << endl;

    for (int i = 0; i < size-1; i++){
        for (int j = 0; j < size-1-i; j++){
            if (A[j+1] < A[j]){
                int temp = A[j+1];
                A[j+1] = A[j];
                A[j] = temp;
            }
        }
    }
}

int main(){
    int Arr[] = {9,8,7,6,5,4,3,2,1};
    int size = sizeof(Arr)/ sizeof(Arr[0]);
    bubble_sort(Arr, size);
    for (int x : Arr){
        cout << x << " ";
    }

    return 0;

}
