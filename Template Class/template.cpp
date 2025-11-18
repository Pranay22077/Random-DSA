#include <iostream>
using namespace std;

template <class T>
T maxx(T x, T y){
    if (x > y){
        return x;
    } else {
        return y;
    }
}

int main(){
    float c = maxx(10.2f,5.4f);
    cout << c << endl;
    return 0;
}