#include <iostream>
using namespace std;

int main (){
    int N;
    cout<< "Enter a number: ";
    cin >> N;

    for (int i = 0 ; i < N; i++){
        for (int j =0; j < N; j++){
            if (j>=i){
                cout << " * " ;
            }
            if (i>j){
                cout << "   ";
            }
        
        }
        cout << endl;
    }
    
}