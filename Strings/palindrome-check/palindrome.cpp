#include <iostream>
using namespace std;

int main(){
    char str[] = "prarp";
    int i,j;
    for (i = 0; str[i] != '\0'; i++){
    }
    i = i-1;
    char str_cpy[10];
    for ( j = 0; i != -1; i--,j++){
        str_cpy[j] = str[i];
    }
    str_cpy[j] = '\0';
    printf("Reversed string: %s", str_cpy);
    cout << endl;
    int k = 0;
    while (str[k]!='\0'){
        if (str[k] != str_cpy[k]){
            printf("Not a palindrome");
        } else {
            printf("Palindrome");
        }
        k++;
    }

    return 0;

}