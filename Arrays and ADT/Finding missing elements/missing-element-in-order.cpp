#include <iostream>
using namespace std;

int sum(int A[],int length, int i){
    return (i < length) ? A[i] + sum(A, length, i+1) : 0;
}

int main(){
    int Arr[] = {1,2,3,4,6,7};
    int last = Arr[5];
    int sum_ideal = (last * (last+1)) / 2;
    int sum_curr = sum(Arr, 6, 0);
    int missing = (sum_curr < sum_ideal) ? sum_ideal - sum_curr : -1;
    (missing >=0)? cout << "Missing element: "<< missing : cout << "No missing element";

    return 0;

}
