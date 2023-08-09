#include <iostream>
using namespace std;

int functions(int x){
    int s = x*x + x -2693;
    return s;
}
int max(int a, int b, int c){
    int max;
    if (b >= a && b >= c){
        max = b;
    }
    else if (a >= b && a >= c){
        max = a;
    }
    else if (c >= a && c >= b){
        max = c;
    }
    return max;
}
float averg(float a, float b, float c){
    float avg = (a+b+c)/3;
    return avg;
}
void drawline(){
    cout<< "==================================="<< endl;
}
int drawsquare(int h, int w){
    for (int i = 0 ; i< h; i++){
        for (int i=0; i < w; i++){
            cout << "X";       
        }
        cout << endl;
    }
}

int main(){
    cout << functions(1) << endl;
    int x,y, z, w, h;
    cout << "Enter 3 interger: ";
    cin >> x >> y >> z;
    cout <<"Maximun number is: "<< max(x,y,z) <<endl;
    cout << "Average number is: "<< averg(x,y,z)<<endl; 
    cout << "Enter Width and Height: ";
    cin >> w, h;
    drawline();
    drawsquare(w,h);
    drawline();

}

