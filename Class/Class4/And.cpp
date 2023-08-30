#include <iostream>
using namespace std;

int main (){
    int x;
    cout << "Input a postcode: ";
    cin >> x;

    if (x==50000 || x==50100 || x == 50200){
        cout << " Chiang Mai Postal code";
    }
    else{
        cout << "Not Chiang Mai Postal Code";
    }
}