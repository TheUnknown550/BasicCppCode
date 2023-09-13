#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int array[10] = {}, input, search, count =0;

    cout << "Enter 10 values in array: "; // input the array
    for (int i =0; i<10; i++){
        cin >> input;
        array[i]=input;
    }
    cout << "Values in array are now: "; // output the array
    for (int i = 0; i<10; i++){
        cout << setw(2) << array[i];
    }
    cout << endl;

    cout << "Enter value to find: "; //promt the user to ask for the value
    cin >> search; 

    for (int i = 0; i <10; i++){ // find the value wanted and increment it
        if (array[i] == search){
            count++;
        }
    }

    cout << search << " Was found " << count << " times."; // final output
    
}