#include <iostream>

using namespace std;

int main(){
    int input, num1, num2;
    
    cout << "Enter -1 to End."<<endl;
    srand(time(0));

    while (input!=-1){
        num1 = rand()%9;
        num2 = rand()%9;
        bool status = true;
        while (status){
            cout << "How much is "<<num1<<" Times "<<num2<<" (-1 to End)?: ";
            cin >> input;
            if (input == -1){
                cout << "Thats all for now. Bye.\n";
                status = false;
            }
            else if (input == (num1*num2)){
                cout << "Very good!\n";
                status = false;
            }
            else {
                cout << "No. Please try again\n";
                status = true;
            }
        }
        
    }
}