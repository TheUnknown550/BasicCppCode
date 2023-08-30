#include <iostream>

using namespace std;

unsigned long fibonacci(unsigned long x){
        
    if (x==0){
        return 0;
    }
    if(x==1){
        return fibonacci(x-1)+x;
    }
    else{
        return fibonacci(x-1)+fibonacci(x-2);
    }

}


int main(){
    int x=0, fib;
    while (x!=-1){
        cout << "Enter the number of Fibonacci sequence (-1 to End): ";
        cin >> x;
        for (int i=0; i<x;i++){
            fib = fibonacci(i);
            for (int j=0; j<fib;j++){
                cout<<"X";
            }
            cout << endl;
        }
    }
    
    
}