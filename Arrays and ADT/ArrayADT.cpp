#include <iostream>
#include <stdlib.h>

using namespace std;

struct Array{
    int *p, size;
} *arr;

void display(int *a, int size){
    cout << "Here are the elements: ";
    for (int i = 0; i<size; i++){
        cout << *(a+i) << " ";
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
}