#include <iostream>

using namespace std;

int main(){
    float grade, total, avg;

    for (int i=0; i<10; i++){
        cout << "Enter grade: ";
        cin >> grade;
        total += grade;
    }
    avg = total /10;
    cout << "The average is " << avg;
}