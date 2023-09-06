#include <iostream>
using namespace std;

void volumn(int r, int h){ // Declare function to calculate the volumn
    cout << "The volumn of the cylinder is "<< 3.14*r*r*h << endl;
}

int main(){
    char prompt; 
    bool invalid = false;
    int r,h;
    do{ // This do while loop is to check if user want to keep calculating
        do{ // This do while loop is to check if the user inputs follows the conditions 
            cout << "Please enter radius and height of a cylinder\n";
            cin >> r>>h;

            if (r<0||h<0){ // Check if the inputs follow the conditions aka not less than 0
                cout << "Invalid input. Try again.\n";
                invalid = true; // invalid true so that it would be looped 
            }
            else{
                if (r==0){ // check if r is equals to 0 meaning that r will be set to default to 2
                    r=2;
                }
                if (h==0){
                    h=2;
                }
                volumn(r,h);
                invalid = false; // invalid false so it wont be looped 
            }
        }while (invalid);
        cout << "Would you like to continue? ";
        cin >> prompt;

    }while(prompt != 'N' && prompt != 'n'); // prompt is a char to check if the user want to continue or not
    cout << "Good bye!";
}