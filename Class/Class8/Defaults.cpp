#include <iostream>
using namespace std;

int volumn(int l=1, int w=1, int h=1){ // set default values
    return l*w*h;
}

int main(){
    cout << volumn() << endl;
    cout << volumn(5) << endl;
    cout << volumn(5,5) << endl;
    cout << volumn(5,5,5) << endl;
}