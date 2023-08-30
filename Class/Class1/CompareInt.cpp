// Import or include in all nessacary libaries
#include <iostream> // allow input and output

// declare the standaard(std) class
using namespace std;

// Begin the function
int main(){
    // Declare variables
    float num1 , num2, num3, sum;

    // Ask for input the first number
    cout << "Please enter the first number: ";
    cin >> num1; // Store the user's input in the first variable

    // Ask for input the seccond number
    cout << "Please enter the seccond number: ";
    cin >> num2; // Store the user's input into the seccond variable

    // Declare the 1st condition to check is the first number is smaller than the 2nd number
    if (num1 > num2){
        // Tell the results to the user
        cout << "The first number is Larger than the seccond number";
        cout << "The 1st number is "<< num1 - num2 << "Larger than the 2nd number";
    }

    // Declare the 2nd condition to check is the first number is smaller than the 1st number
    else if (num1 < num2){
        // Tell the results to the user
        cout << "The first number is Smaller than the seccond number";
        cout << "The 2nd number is "<< num2 - num1 << "Larger than the 1st number";
    }

    // Tell the user if the value of the numbers are the same
    else{
        // Tell the results to the user
        cout << "Both the numbers have the same value";
    }
}