#include <iostream>

using namespace std;

int main (){
    char x;
    cout << "Input an alphabet: ";
    cin >> x;

    switch(x) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            cout << "Thats a vowel";
            break;
        default:
            cout<< "Not a vowel!";
    }
}