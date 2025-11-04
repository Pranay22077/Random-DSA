#include <iostream>
using namespace std;

struct Array{
    int *p, size;
} *arr, *arr2;

void display(int *a, int size){
    cout << "Here are the elements: ";
    for (int i = 0; i<size; i++){
        cout << *(a+i) << " ";
    }
}

void insert(int n, int index){
    arr2 = (struct Array *)malloc(sizeof(Array));
    arr2 -> size = arr -> size + 1;
    for (int i = 0; i < n; i++){
        *(arr2 -> p+i) = *(arr -> p+i);
    }
    *(arr2 -> p+index) = n;
    for (int i = index + 1; i< arr2 -> size; i++){
        *(arr2 -> p + i) = *(arr -> p + i - 1);
    }
}

int main(){
    arr = (struct Array *)malloc(sizeof(Array)); 
    cout << "Enter the size of array: " << endl;
    scanf("%d", &(arr -> size));

    arr -> p = new int [arr -> size];
    printf("Input %d elements: ", arr -> size);
    cout << endl;
    for (int i = 0; i < arr -> size; i++){
        printf("Element %d: ", i+1);
        scanf("%d", (arr -> p+i));
    }
    cout << "All elements stored successfully!" << endl;;

    display(arr -> p, arr -> size);
    cout << endl;

    int num, index;
    cout << "Enter the number to be inserted in the array: ";
    scanf("%d", &num);

    cout << "Enter the index where the new element is to be inserted: ";
    scanf("%d", &index);
    insert(num, index);
    display(arr2 -> p, arr2 -> size);
}