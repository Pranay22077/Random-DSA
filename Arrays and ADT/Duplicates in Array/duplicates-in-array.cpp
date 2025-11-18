#include <iostream>
using namespace std;

int main(){
    int A[] = {3,6,8,8,10,12,1,1,1, 20};
    int record = A[0];
    for (int i = 0; i < 10; i++){
        if (A[i] != record){
            int j = 0, count = 0;
            while (A[i + j] == A[i+j+1]){
                count++;
                j++;
            }
            if (count > 0){
                cout << "Element "<< A[i] << " is repeated " << count << " times"<< endl;
            }
            record = A[i];
        }
    }
}