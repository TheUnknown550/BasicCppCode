#include <iostream> 
using namespace std;

int main(){
    int num, index; // declare inputs values
    int array[5] ={}; // declare arrays to store the value

    for (int i = 0; i<5; i++){
        cout<< "Enter a number: "; // prompt the user
        cin >> num;
        cout << "Enter index: "; // prompt the user
        cin >> index;
        array[index] = num; // set the index to the value that user wants
        cout << endl;
    }    
    cout << "User array elements: ";
    for (int i =0; i<5; i++){ // output 
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Reversed array elements: ";
    for(int i=4; i>=0; i--){ // output in reversed
        cout << array[i] << " ";
    }
}