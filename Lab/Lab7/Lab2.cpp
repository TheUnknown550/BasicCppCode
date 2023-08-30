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
    int x=0;
    while (x!=-1){
        cout << "\nEnter the number of Fibonacci sequence (-1 to End): ";
        cin >> x;
    
        for (int i=0; i<x;i++){
           cout << fibonacci(i)<<" ";
        }
    }
    return 0;
    
    
}