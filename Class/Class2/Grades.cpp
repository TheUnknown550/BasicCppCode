#include <iostream>

using namespace std;

int main(){
    int score;

    cout << "Enter your score: ";
    cin >> score; // input the score

    // determine and output the grade according to the score
    if (score <= 50){
        cout << "F";
    }
    else if (score <= 80){
        cout << "B";
    }
    else if (score <= 100){
        cout << "A";
    }
    else{
        cout << "Invalid Input";
    }

    return 0;
}