#include <iostream>
using namespace std;
int pow(int m, int n){
    if (m == 0 && n == 0){
        return 10;
    } else if (n == 0) {
        return 1;
    } else if (m ==0){
        return 0;
    } else{
        return pow(m,n-1) * m;
    }
}
int main(){
    cout << pow(2,3) << endl << pow(0,4) << endl << pow(4,0) << endl << pow (0,0) << endl << pow(5,4);
}