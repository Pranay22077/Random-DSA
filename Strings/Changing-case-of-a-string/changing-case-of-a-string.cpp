#include <iostream>
#include <string>
using namespace std;

int main(){
    string str;
    cout << "Enter a string to be converted to upper case (one word only): ";
    getline(cin, str);
    cout << str;

    for (int i = 0; str[i]!= '\0'; i++){
        str[i] = str[i] - 32;
    };

    cout << "The changed string is: " << str;

    return 0;
}