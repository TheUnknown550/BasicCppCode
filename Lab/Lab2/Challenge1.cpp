#include <iostream>

using namespace std;

int main(){
    int x;

    cout << "Enter a value: ";

    cin >> x;

    if (x>56){
        cout<< "YOU WIN";
    }
    if (x<= 56) {
        cout<<"YOU LOSE";
    }

}