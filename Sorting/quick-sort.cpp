#include <iostream>
using namespace std;

int partition(int A[], int low, int high){
    int pivot = A[low];
    int start = low;
    int end = high;
    while (start < end){
        while (A[start] <= pivot && start < high){start++;}
        while (A[end] >= pivot && end > low){end--;}
        if (start < end){
            int temp = A[start];
            A[start] = A[end];
            A[end] = temp;
        }
    }
    int temp1 = A[end];
    A[end] = A[low];
    A[low] = temp1;
    return end;
}

int quick_sort(int A[], int low, int high){
    if (low < high){
        int loc = partition(A, low, high);
        quick_sort(A, low, loc-1);
        quick_sort(A, loc+1, high);
    }

    return 0;
}

int main(){
    int Arr[] = {7,6,0,5,9,2,1,15,10};
    int l = 0;
    int h = sizeof(Arr)/ sizeof(Arr[0]) - 1;
    quick_sort(Arr, l, h);

    for (int x:Arr){
        cout << x << " ";
    }
}