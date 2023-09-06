#include <iostream>
using namespace std;

void volumn(int r, int h){
    cout << "The volumn of the cylinder is "<< 3.14*r*r*h << endl;
}

int main(){
    char prompt;
    bool invalid = false, again = true;
    int r,h;
    do{
        do{
            cout << "Please enter radius and height of a cylinder\n";
            cin >> r>>h;

            if (r<0||h<0){
                cout << "Invalid input. Try again.\n";
                invalid = true;
            }
            else{
                if (r==0){
                    r=2;
                }
                if (h==0){
                    h=2;
                }
                volumn(r,h);
                invalid = false;
            }
        }while (invalid);
        cout << "Would you like to continue? ";
        cin >> prompt;

    }while(prompt != 'N'&&prompt != 'n');
    cout << "Good bye!";
}