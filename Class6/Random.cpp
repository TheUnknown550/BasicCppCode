#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

using namespace std;

int main(){
    int f1=0, f2=0, f3=0, f4=0, f5=0, f6=0, face=0;
    cout << time(0) << endl;

    srand(time(0));
    for (int i=1;i<=20;i++){
        cout << setw(10)<<rand()%6+1;
        if (i%5 == 0){
            cout << endl;
        }
    }

    srand(time(0));
    for (int i=1;i<=6000;i++){
        face = rand()%6+1;
        switch(face){
            case 1:
                f1++;
                break;
            case 2:
                f2++;
                break;
            case 3:
                f3++;
                break;
            case 4:
                f4++;
                break;
            case 5:
                f5++;
                break;
            case 6:
                f6++;
                break;
        }
    }
    cout << setw(4)<<"Face"<<setw(13)<<"Frequency\n";
    cout << setw(4)<<"1"<<setw(13)<<f1<<endl;
    cout << setw(4)<<"2"<<setw(13)<<f2<<endl;
    cout << setw(4)<<"3"<<setw(13)<<f3<<endl;
    cout << setw(4)<<"4"<<setw(13)<<f4<<endl;
    cout << setw(4)<<"5"<<setw(13)<<f5<<endl;
    cout << setw(4)<<"6"<<setw(13)<<f6<<endl;
}