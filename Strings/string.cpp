#include <iostream>
#include <string>
#include <stdio.h>
using namespace std;

int main(){
    char A[] = {65,66,67,68};
    printf("%s", A);
    cout << endl;

    char str[] = "Hello, this is Pranay";
    printf("%s", str);

    printf("\n");
    char string1[40];
    cout << "Enter a string: ";
    scanf("%s", string1);
    printf("You entered %s\n",string1);
    return 0;
}