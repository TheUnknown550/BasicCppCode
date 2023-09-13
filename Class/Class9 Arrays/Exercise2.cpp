#include <iostream>

using namespace std;

int main(){
    int array[100];

    for(int j=0 ; j<100; j++){
        array[j]=1;
    }
    
    for(int i = 0; i < 100; i++){
        cout << array[i];
        if ((i%10)==9){
            cout << endl;
        }
        else{
            cout << " ";
        }
    }
    return 0;
}