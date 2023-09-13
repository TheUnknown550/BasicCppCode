#include <iostream>

using namespace std;

int main(){
    float grade, total, avg, i=0;
    do{
        cout << "Enter grade: ";
        cin >> grade;
        if (grade != -1){
            total += grade;
            i++;
        }

    }while( grade != -1);
    if (i!=0){
        avg = total / i;
        cout << avg; 
    }
    else{
        cout << "No Grade have been entered";
    }
    
}