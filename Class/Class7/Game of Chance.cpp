#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int rolldice(){
    int point = 0;
    int d1 = rand()%6+1;
    int d2 = rand()%6+1;
    point = d1 + d2;
    cout << "Player rolled: " << d1 << " + " << d2 << " = " << d1+d2 << endl;
    return point;
}

int main(){
    int point=0, sum;
    string status="InPlay";
    srand(time(0));
    while (status=="InPlay"){
        sum = rolldice();
        cin.get();
        if (sum==11){
            status = "Winner!";
        }
        else if (sum == 2 || sum == 3|| sum == 12){
            status = "Lose!";
        }
        else if (sum == 4|| sum == 5|| sum == 6|| sum == 8||sum==9||sum==10){

            point+=sum;
        }
        else if (sum == 7&& point != 0){
            status = "Winner!";
        }
        else{
            status = "Lose!";
        }
    }
    cout<<"Player "<<status << endl << "points = " << point;    
}