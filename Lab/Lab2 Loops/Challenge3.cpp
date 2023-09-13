#include <iostream>

using namespace std;

int main(){
    int counter =1 , min, max, MaxCount = 1;
    cout << "Input number 1: ";
    cin >> max;

    while (counter < 10){
        counter += 1;
        cout << "Input number " << counter << ": ";
        cin >> min;
        if (max == min) {
            MaxCount +=1;
        }
        if (max < min){
            max = min;
            MaxCount = 1;
        }

    }
    cout << "This is the Occurance of Max number: " << MaxCount;

}