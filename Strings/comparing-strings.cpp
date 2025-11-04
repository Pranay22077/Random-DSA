#include <iostream>
using namespace std;

int main(){
    char str1[] = "painting";
    char str2[] = "painter";

    int i = 0;
    while (str1[i] == str2[i]){
        i++;
    }
    if (str1[i] == str2[i]){
        cout << "strings are same";
    } else if(str1[i]< str2[i]){
        cout << "String 1 is smaller than string 2";
    } else if (str1[i] > str2[i]){
        cout << "String 1 is greater than string 2";
    }

    return 0;
    
}