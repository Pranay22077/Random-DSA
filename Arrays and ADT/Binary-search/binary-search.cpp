#include <iostream>
using namespace std;

int binary_search(int A[], int key){
    int low = 0;
    int high = 5;
    int mid = (low+high)/2;
    while (low<=high){
        if (key == A[mid]){
            return mid;
        }else if (key > A[mid]){
            low = mid + 1;
            mid = (low+high)/2;
        } else if (key < A[mid]){
            high = mid - 1;
            mid = (low+high)/2;
        } else {
            return -1;
        }
    }
}

int main(){
    int A[] = {11,44,66,88,99,100};
    int result, num;
    cout << "Enter an element to search in the array: ";
    cin >> num;
    result = binary_search(A, num);
    if (result >= 0){
        cout << "Element found at index " << result;
    } else{
        cout << "Element wasn't there in the array";
    }
}