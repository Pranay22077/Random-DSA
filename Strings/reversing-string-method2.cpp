#include <iostream>
using namespace std;


int main(){
    char str[] = "pranay";
    int i,j = 0;
    for (i = 0; str[i]!= '\0'; i++){};
    i = i-1;
    while(j < i){
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        j++;
        i--;
    }
    printf("The reversed string is: %s", str);

    return 0;

}
