#include <iostream>

using namespace std;

int main (){
    int x;
    do{
        
        cout << "Enter Password: ";
        cin >> x;

        switch(x) {
            case 1234:
                cout << "Password is correct\n";
                break;
            default:
                cout<< "Incorrect Password. Try again\n";
        }
    }while (x != 1234);
}