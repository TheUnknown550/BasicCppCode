#include <iostream>
using namespace std;

void function1(int &x){ // the pass by reference is the &x in the function
    x=x+1;
}
void function(int x){ // pass by value
    x=x+1;
}

int main(){

    int num = 5;
    cout << num << endl;
    function(num);
    cout << num << endl;
    function1(num);
    cout << num;

    return 0;
}