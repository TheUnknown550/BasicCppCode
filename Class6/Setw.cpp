#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
    double x = 1.21321321412313;
    
    cout << setw(8) << "x:" << setw(10) << x<< endl;

    cout << setw(8) << "Precision" << setw(10)<<"Result\n";
    cout << setw(8) << "1" <<setw(10)<< fixed << setprecision(1)<<x<<endl;
    cout << setw(8) << "2" <<setw(10)<< fixed << setprecision(2)<<x<<endl;
    cout << setw(8) << "3" <<setw(10)<< fixed << setprecision(3)<<x<<endl;
    cout << setw(8) << "4" <<setw(10)<< fixed << setprecision(4)<<x<<endl;

}