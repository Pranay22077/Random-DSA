#include <iostream>
using namespace std;

void insertion_sort(int A[], int size){
    for (int i = 1; i < size; i++){
        int temp = A[i];
        int j = i-1;
        while (temp < A[j] && j >= 0){
            A[j+1] = A[j];
            j--;
        }
        A[j+1] = temp;
    }
}

int main(){
    int Arr[] = {4,3,8,4,9,7,2,1};
    int size = sizeof(Arr)/ sizeof(Arr[0]);
    insertion_sort(Arr, size);
    for (int x : Arr){
        cout << x << " ";
    }

    return 0;

}
