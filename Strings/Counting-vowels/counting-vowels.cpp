#include <iostream>
using namespace std;

int main(){
    char str[] = "hello, i am pranay!";
    char *p = str;
    int vowel = 0, cons = 0;
    for (int i = 0; str[i] != 0; i++){
        if (*(p+i) == 'a' || *(p+i) == 'e' || *(p+i) == 'i' || *(p+i) == 'o' || *(p+i) == 'u'){
            vowel ++;
        } else if ( (*(p+i) >= 65 && *(p+i) <= 90) || (*(p+i) >= 97 && *(p+i) <= 122)){
            cons++;
        }
    }
    cout << "Vowels are: "<< vowel << " and consonants are: " << cons;

    return 0;
}