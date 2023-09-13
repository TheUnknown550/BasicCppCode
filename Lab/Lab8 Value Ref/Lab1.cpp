#include <iostream>
using namespace std;

void tripleCallByValue(int x){
    cout << "value returned from tripleCallByValue() is: "<<x*3<<endl;
}


void tripleCallByReference(int &x){
    x=x*3;
}

int main(){
    int x;
    
    cout << "Enter an integer: ";
    cin >> x;

    cout << "value before call to tripleCallByValue() is: "<<x<<endl;
    tripleCallByValue(x);
    cout << "value (in main) after call to tripleCallByValue() is: "<<x<<endl;


    cout << "value before call to tripleCallByReference() is: "<<x<<endl;
    tripleCallByReference(x);
    cout << "value (in main) after call to tripleCallByReference() is: "<<x<<endl;


}