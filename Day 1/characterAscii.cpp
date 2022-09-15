#include <iostream>
using namespace std;

int main() {
    char ch;
    cin >> ch;
    
    if((ch >= 48) && (ch <= 57))
        cout<<"It is a number";
    else if((ch >= 65) && (ch <= 90))
        cout<<"It is an uppercase letter";
    else if((ch >= 97) && (ch <= 122))
        cout<<"It is a lowercase letter";
    else
        cout<<"It is a symbol";

    return 0;
}