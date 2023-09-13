#include <iostream>

using namespace std;


float avg(float a, float b, float c, float d, float e){
    float average = (a+b+c+d+e)/16;
    return average;
}
float GPA(float a, float b, float c, float d, float e){
    float GPAavg;
    a = a*2;
    b = b*3;
    c= c*3;
    d = d *4;
    e = e*4;
    GPAavg = avg(a,b,c,d,e);
    return GPAavg;
}

int main(){
    int a,b,c,d,e, counter=1, x=1;
    float average, Avg=0;
    while (x==1){
        cout << "Enter grade (4=A, 3=B, 2=C, 1=D, 0=F) of five subjects: ";
        cin >> a >> b >> c >> d>> e;
        if ((a<5)&&(b<5)&&(c<5)&&(d<5)&&(e<5)){
            cout<< "Student "<<counter<<" GPA: "<< GPA(a,b,c,d,e) << endl;
            Avg = Avg + GPA(a,b,c,d,e);
            if (counter == 3){
                break;
            }
            counter++;
            
        }
        else{
            cout<< "Invalid grade input"<<endl;
        }
        
    }
    cout << "Average GPA of three students: " << Avg/3;
    
}