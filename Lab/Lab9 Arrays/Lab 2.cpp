#include <iostream>
using namespace std;

int main(){
    int num, index;
    int array[5] ={}; 

    for (int i = 0; i<5; i++){
        cout<< "Enter a number: ";
        cin >> num;
        cout << "Enter index: ";
        cin >> index;

        array[index] = num;
    }    
    cout << "User array elements: ";
    for (int i =0; i<5; i++){
        cout << array[i] << " ";
    }
    cout << endl;
    cout << "Reversed array elements: ";
    for(int i=5; i>0; i--){
        cout << array[i] << " ";
    }
}