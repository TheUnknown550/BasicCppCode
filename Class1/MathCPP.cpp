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

    // Ask for input the third number
    cout << "Please enter the third number: ";
    cin >> num3; // Store the user's input into the third variable

    // Process the numbers together
    sum = num1 / (num1 + num2 + num3);
    
    cout << "The output of both theses number is: " << sum; // Output the sum to the user
}