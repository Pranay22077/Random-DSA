#include <iostream>
#include <string>
using namespace std;

int main(){
    char str1[] = "Hello this is yeee";
    int i;
    for (i = 0; str1[i]!=0; i++){};
    printf("Length of the string is %d",i);

    string str2;
    getline(cin, str2);

    cout << str2;

    return 0;
}