#include <iostream>

using namespace std;

int main(){
    int small, min;

    cout << "Enter an number: ";
    cin >> min;

    for (int i=1; i < 10; i++){
        cout << "Enter an number: ";
        cin >> small;

        if (small < min){
            min = small;
        }
    }
    cout << min;

}