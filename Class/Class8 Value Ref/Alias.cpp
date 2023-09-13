#include <iostream>
using namespace std;

int main(){
    int a =3;
    int &b = a; // b is now a alias for a meaning they have the same address

    cout << "a: "<<a <<endl<< "b: "<< b<<endl;
    cout << "Change value" << endl;
    b=9;
    cout << "a: "<<a <<endl<< "b: "<< b<<endl;

    cout << "Addresses"<<endl;
    cout << "a: "<<&a <<endl<< "b: "<< &b <<endl;

}