#include <iostream>

using namespace std;

int main(){

    // Devlare Variables
    float sum = 0, counter = 0, grade, avg=0;

    // Ask to input grade
    cout << "Enter grade, -1 to end: ";
    cin >> grade;

    // Loops the inputs
    while (grade != -1){
        sum = sum + grade;
        counter += 1;
        cout << "Enter grade, -1 to end: ";
        cin >> grade;
    }

    if (counter != 0) {
        avg = sum / counter;
        cout << "Avg. is: " << grade;
    }
    else {
        cout << "There is no input";
    }
    

    return 0;    
}