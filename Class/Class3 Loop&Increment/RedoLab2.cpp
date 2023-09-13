#include <iostream>

using namespace std;

int main(){
    int big, max, counter=1;

    cout << "Enter an number: ";
    cin >> max;

    for (int i=1; i < 10; i++){
        cout << "Enter an number: ";
        cin >> big;

        if (big > max){
            max = big;
            counter = 1;
        }
        else if (big == max){
            counter++;
        }
    }
    cout << max << endl << counter;

}