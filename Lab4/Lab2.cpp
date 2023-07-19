#include <iostream>
using namespace std;

int main(){
    int one=0, two=0, three=0, input;

    do{
        cout << "Enter 1, 2, or 3 (-1 t0 end input): ";
        cin >> input;
        switch (input){
            case 1:
                one++;
                break;
            case 2: 
                two++;
                break;
            case 3:
                three++;
                break;
            case -1:
                break;
            default:
                cout << "Unknown Input\n";
        }
    }while (input != -1);
    cout << "Total 1s: "<< one << "\nTotal 2s: "<< two << "\nTotal 3s: "<< three;

}