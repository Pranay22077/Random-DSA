#include <iostream>
using namespace std;

int main(){
    int *arr = new int[10]; 
    // *(arr+2) = 3;
    // cout << *(arr+2);
    for (int i = 0; i<10; i++){
        *(arr+i) = i*3;
    }
    arr + 9;
    for (int i = 9; i>=0; i--){
        cout << *(arr + i) << endl;
    }

    delete []arr;
    arr = nullptr; // Preventing memory leak, lol XD
}