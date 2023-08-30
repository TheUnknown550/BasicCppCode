// Import or include in all nessacary libaries
#include <iostream> // allow input and output

// declare the standaard(std) class
using namespace std;

// Begin the function
int main(){
    // Declare variables
    int num1 , num2, sum;

    // Ask for input the first number
    cout << "Please enter the first number: ";
    cin >> num1; // Store the user's input in the first variable

    // Ask for input the seccond number
    cout << "Please enter the seccond number: ";
    cin >> num2; // Store the user's input into the seccond variable

    // Add the 2 inputs together
    sum = num1 + num2;
    
    cout << "The addition of both theses number is: " << sum; // Output the sum to the user
}