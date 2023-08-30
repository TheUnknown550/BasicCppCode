#include <iostream>

using namespace std;

int main (){
    int N; // Declare a variable

    // Request an input
    cout << "Input a number: ";
    cin >> N;

    // Start for loops
    for (int i = 0; i<N; i++){

        // use if to see if N is an odd number
        if ((N%2)==1){ 
            // Find if the middle point of the row
            int Mid = N/2;
            
            if (i <= N/2){
                // Create a piramid
                for (int j = 0; j<N; j++){

                    // Locate if J is between the middle point added by the row value
                    // EX: N=5, Mid = 2    in row 0: j = 2.  in row 1: 1<=J<=3
                    if (j >= ((Mid)-i) && j <= ((Mid)+i)){
                        cout << "*" ;
                    }
                    else {
                        cout << " ";
                    }
                }
            }
            else{
                // create the upsidedown piramid
                for (int j = 0; j<N; j++){
                    // By doing the opposite of the right-side-up piramid
                    if (j >= (Mid-((N-1)-i)) && j <= (Mid+((N-1)-i))){
                        cout << "*";
                    }
                    else {
                        cout << " ";
                    }
                }
            }
            
        }
        cout << endl;// start a new row on the column
    }

}