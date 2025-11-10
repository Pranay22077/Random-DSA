#include <iostream>
using namespace std;

int partition(int A[], int low, int high){
    int pivot = A[low];
    int i = low + 1;
    int j = high;
    while (true){
        while (i <= high && A[i] <= pivot) i++;
        while (A[j] > pivot) j--;
        if (i < j)
            swap(A[i], A[j]);
        else
            break;
    }
    swap(A[low], A[j]);
    return j;
}

void quick_sort(int A[], int low, int high){
    if (low < high){
        int p = partition(A, low, high);
        quick_sort(A, low, p - 1);
        quick_sort(A, p + 1, high);
    }
}

int main(){
    int A[10], n;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++)
        cin >> A[i];
    quick_sort(A, 0, n - 1);
    cout << "Sorted array: ";
    for (int i = 0; i < n; i++)
        cout << A[i] << " ";
}
