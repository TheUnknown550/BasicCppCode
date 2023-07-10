// This program calculates the product of three integers
#include <iostream>

using namespace std;

int main(){
    // Declare the variables
    int x;
    int y;
    int z;
    int results;

    // Ask the user to input the 3 varibles
    cout << "Please enter 3 integers"<<endl;
    cout << "Please enter the first interger: "<<endl;
    cin >> x;
    cout << "Please enter the 2nd interger: "<<endl;
    cin >> y;
    cout << "Please enter the 3rd interger: "<<endl;
    cin >> z;
    
    // Find the product of these 3 interger
    results = x * y * z;
 
    cout << "The product is "<< results;
}