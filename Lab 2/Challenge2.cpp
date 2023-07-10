#include <iostream>

using namespace std;

int main(){
    int counter =1 , min, max;
    cout << "Input number 1: ";
    cin >> min;

    while (counter < 10){
        counter += 1;
        cout << "Input number " << counter << ": ";
        cin >> max;
        if (max < min){
            min = max;
        }

    }
    cout << "This is the lowest number: " << min;

}