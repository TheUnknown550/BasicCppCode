#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
    float rando, sum=0, avg = 0;
    
    cout << "Number"<< endl;
    srand(time(0));
    for (int i=1;i<=10;i++){
        rando = (rand()%10000+10000)/10000.0;
        cout << setw(10) << fixed << setprecision(4)<<rando;

        // Find Sum
        sum += rando;

        if (i%5 == 0){
            cout << endl;
        }
    }

    // Find Avgerage
    avg = sum/10;

    // Find SD
    float sd, sd1, sd2, sd3, sd4 ,sd5, sd6;
    sd1 = pow((1-avg),2);
    sd2 = pow((2-avg),2);
    sd3 = pow((3-avg),2);
    sd4 = pow((4-avg),2);
    sd5 = pow((5-avg),2);
    sd6 = pow((6-avg),2);
    sd = sqrt((sd1+sd2+sd3+sd4+sd5+sd6)/9);

    cout << endl << setw(22) << "Sum = " << setw(5)<< fixed << setprecision(4) << sum;
    cout << endl << setw(22) << "Average = " << setw(5)<< fixed << setprecision(4) << avg;
    cout << endl << setw(22) << "Standard deviation = " << setw(5)<< fixed << setprecision(4) << sd;
}