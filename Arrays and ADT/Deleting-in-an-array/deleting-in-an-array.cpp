#include <iostream>
using namespace std;

struct Array{
    int *p, size;
} *arr,*arr2, *arr3;
void display(int *a, int size){
    cout << "Here are the elements: ";
    for (int i = 0; i<size; i++){
        cout << *(a+i) << " ";
    }
}

void insert(int n, int index){
    arr2 = new Array;
    arr2->size = arr->size + 1;
    arr2->p = new int[arr2->size];

    for (int i = 0; i < index; i++)
        arr2->p[i] = arr->p[i];

    arr2->p[index] = n;

    for (int i = index; i < arr->size; i++)
        arr2->p[i+1] = arr->p[i];
}

void dlt(int n, int index){
    arr3 = new Array;
    arr3 -> size = arr2 -> size - 1;
    arr3 -> p = new int[arr3 -> size];
    for (int i = 0; i< index; i++){
        *(arr3 ->p + i) = *(arr2 -> p+i);
    }
    for (int i = index; i<= arr2 -> size; i++){
        *(arr3 ->p + i) = *(arr2 -> p+i+1);
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

    int num_ins, index_ins;
    cout << "Enter the number to be inserted in the array: ";
    scanf("%d", &num_ins);

    cout << "Enter the index where the new element is to be inserted: ";
    scanf("%d", &index_ins);
    insert(num_ins, index_ins);
    display(arr2 -> p, arr2 -> size);
    cout << endl;

    int num_dlt, index_dlt;
    cout << "Enter the index from where the  element is to be deleted: ";
    scanf("%d", &index_dlt);
    dlt(num_dlt, index_dlt);
    display(arr3 -> p, arr3 -> size);

}