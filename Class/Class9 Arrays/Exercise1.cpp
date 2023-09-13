#include <iostream>

using namespace std;

int main(){
    int array[10] = {0,0,0,0,0,0,0,0,0,0};

    for(int i = 0; i < 10; i++){
        cout << array[i];
        if (i<9){
            cout << ",";
        }
    }
    return 0;
}