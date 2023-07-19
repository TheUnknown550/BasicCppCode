#include <iostream>

using namespace std;

int main(){
    int date;

    cout << "Enter Date: ";
    cin >> date;

    if (date >= 11 && date <= 19){
        cout << "Date is the middle of the Month";
    }
    else if (date >= 1 && date <= 31){
        cout << "Date is either the start or end of the Month";
    }
    else{
        cout<< "Invalid date";
    }

}