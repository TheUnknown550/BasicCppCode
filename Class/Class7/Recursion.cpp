// Factourial
#include <iostream>

using namespace std;

unsigned long factorial(unsigned long n){
    if (n <=1){
        return 1;
    }else{
        return n*factorial(n-1);
    }
}

int main(){
    cout << factorial(6) << endl;
}