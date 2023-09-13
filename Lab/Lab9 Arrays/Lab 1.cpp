// Declare libary used
#include <iostream> 
#include <cstdlib>
#include <ctime>
#include <iomanip>

using namespace std;

int main(){
    int diceRolls = 6000, face; // diceRolls is amount of roll of dices, face is the value that gotten from that roll
    int faces[diceRolls], freq[6]={}; // faces record the amount of rolls, freq record the amount per faces shown
    srand(time(0));

    for (int i = 0; i<diceRolls;i++){ // record the dice faces into the faces array
        faces[i] = rand()%6+1;
    }
    for (int j = 0; j<diceRolls;j++){ // Calculate the frequecny of the faces
        freq[faces[j]]++;
    }

    cout<< setw(4) << "Face" << setw(14) << "Frequency"; // output
    for (int x=1; x<=6 ; x++){
        cout << endl<< setw(4) << (x) << setw(14) << freq[x] ;
    }
     

    return 0;
}