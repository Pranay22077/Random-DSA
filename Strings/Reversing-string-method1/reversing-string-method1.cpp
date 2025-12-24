#include <iostream>
using namespace std;

int main(){
    char str[] = "pranay";
    int i;
    for (i = 0; str[i] != '\0'; i++){
    }
    i = i-1;
    char str_cpy[10];
    for (int j = 0; i != -1; i--,j++){
        str_cpy[j] = str[i];
    }
    str_cpy[j] = '\0';
    printf("Reversed string: %s", str_cpy);

    return 0;

}
