#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Enter a number: ";
    cin >> num;
    cout <<"Even numbers from 0 to "<<num<<": "<<endl;
    for (int i; i <= num; i++){
        if ((i%2) == 0){
            cout << i << endl;
        }
    }
}