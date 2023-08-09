#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;


int main(){
    int face=0, modev=0, medv = 0;
    float  mode, median, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;

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


    // Find Mode
    if (modev <= f1){
        modev = f1;
        mode = 1.000;
    }
    if (modev <= f2){
        modev = f2;
        mode = 2.000;
    }
    if (modev <= f3){
        modev = f3;
        mode = 3.000;
    }
    if (modev <= f4){
        modev = f4;
        mode = 4.000;
    }
    if (modev <= f5){
        modev = f5;
        mode = 5.000;
    }
    if (modev <= f6){
        modev = f6;
        mode = 6.000;
    }

    // Find Median
    if (f1 <= 3000){
        medv+=f1;
        if((medv+f2)<=3000){
            medv+=f2;
            if((medv+f3)<=3000){
                medv+=f3;
                if((medv+f4)<=3000){
                    medv+=f4;
                    if((medv+f5)<=3000){
                        medv+=f5;
                        if((medv+f6)<=3000){
                        medv+=f6;
                    }
                    else if ((medv+f6) > 3000){
                        median = 6.000;
                    }
                    }
                    else if ((medv+f5) > 3000){
                        median = 5.000;
                    }
                }
                else if ((medv+f4) > 3000){
                    median = 4.000;
                }
            }
            else if ((medv+f3) > 3000){
                median = 3.000;
            }        
        }
        else if ((medv+f2) > 3000){
            median = 2.000;
        }
    }
    else if (f1 > 3000){
        median = 1.000;
    }

    // Find Mean
    float mean = ((f1*1)+(f2*2)+(f3*3)+(f4*4)+(f5*5)+(f6*6))/6000;

    // Find SD
    float sd, sd1, sd2, sd3, sd4 ,sd5, sd6;
    sd1 = pow((1-mean),2)*f1;
    sd2 = pow((2-mean),2)*f2;
    sd3 = pow((3-mean),2)*f3;
    sd4 = pow((4-mean),2)*f4;
    sd5 = pow((5-mean),2)*f5;
    sd6 = pow((6-mean),2)*f6;
    sd = sqrt((sd1+sd2+sd3+sd4+sd5+sd6)/5999);

   

    cout << endl << setw(20) << "Mode =" << setw(5)<< fixed << setprecision(3) << mode;
    cout << endl << setw(20) << "Median =" << setw(5)<< fixed << setprecision(3) << median;
    cout << endl << setw(20) << "Mean =" << setw(5)<< fixed << setprecision(3) << mean;
    cout << endl << setw(20) << "Standard deviation =" << setw(5)<< fixed << setprecision(3) << sd;

}