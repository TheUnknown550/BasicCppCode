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
    int a,b,c,d,e, x=1;
    float average;
    while (x==1){
        cout << "Enter grade (4=A, 3=B, 2=C, 1=D, 0=F) of five subjects: ";
        cin >> a >> b >> c >> d>> e;
        if ((a<5)&&(b<5)&&(c<5)&&(d<5)&&(e<5)){
            cout<< "GPA: "<< GPA(a,b,c,d,e) << endl;
            break;
        }
        else{
            cout<< "Invalid grade input"<<endl;
        }
        
    }
    
}