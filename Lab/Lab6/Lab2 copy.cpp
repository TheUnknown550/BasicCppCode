#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>

using namespace std;

int main(){
    float r1, r2, r3, r4, r5, r6, r7, r8, r9, r10, sum=0, avg = 0;
    
    cout << "Number"<< endl;
    srand(time(0));
    r1 = (rand()%10000+10000)/10000.0;
    r2 = (rand()%10000+10000)/10000.0;
    r3 = (rand()%10000+10000)/10000.0;
    r4 = (rand()%10000+10000)/10000.0;
    r5 = (rand()%10000+10000)/10000.0;
    r6 = (rand()%10000+10000)/10000.0;
    r7 = (rand()%10000+10000)/10000.0;
    r8 = (rand()%10000+10000)/10000.0;
    r9 = (rand()%10000+10000)/10000.0;
    r10 = (rand()%10000+10000)/10000.0;
    cout << setw(10) << fixed << setprecision(4)<<r1;
    cout << setw(10) << fixed << setprecision(4)<<r2;
    cout << setw(10) << fixed << setprecision(4)<<r3;
    cout << setw(10) << fixed << setprecision(4)<<r4;
    cout << setw(10) << fixed << setprecision(4)<<r5<<endl;
    cout << setw(10) << fixed << setprecision(4)<<r6;
    cout << setw(10) << fixed << setprecision(4)<<r7;
    cout << setw(10) << fixed << setprecision(4)<<r8;
    cout << setw(10) << fixed << setprecision(4)<<r9;
    cout << setw(10) << fixed << setprecision(4)<<r10;
    // Find Sum
    sum = r1+ r2 + r3+ r4+ r5+ r6+ r7+r8+r9+r10;

    // Find Avgerage
    avg = sum/10;

    // Find SD
    float sd, sd1, sd2, sd3, sd4 ,sd5, sd6,sd7,sd8,sd9,sd10;
    sd1 = pow((r1-avg),2);
    sd2 = pow((r2-avg),2);
    sd3 = pow((r3-avg),2);
    sd4 = pow((r4-avg),2);
    sd5 = pow((r5-avg),2);
    sd6 = pow((r6-avg),2);
    sd7 = pow((r7-avg),2);
    sd8 = pow((r8-avg),2);
    sd9 = pow((r9-avg),2);
    sd10 = pow((r10-avg),2);
    sd = sqrt((sd1+sd2+sd3+sd4+sd5+sd6+sd7+sd8+sd9+sd10)/9);

    cout << endl << setw(22) << "Sum = " << setw(5)<< fixed << setprecision(4) << sum;
    cout << endl << setw(22) << "Average = " << setw(5)<< fixed << setprecision(4) << avg;
    cout << endl << setw(22) << "Standard deviation = " << setw(5)<< fixed << setprecision(4) << sd;
}