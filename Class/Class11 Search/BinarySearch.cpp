#include <iostream>
using namespace std;

int binarySearch(int [], int , int ,int , const int);

int main(){
    const int size = 15;
    int a[size],key,result;
    for(int i=0; i<size; i++){
        a[i]=2*i;
    }

    cout << "Enter a number between 0 and 28: ";
    cin >> key;
    result = binarySearch(a, key, 0, size-1, size);
    if (result !=-1){
        cout << endl << key << " is found at index: " << result << endl;
    }else{
        cout << endl << key << " is not found.\n";
    }

}


int binarySearch(int x[], int k, int low, int high, int size){
    int middle;
    while (low <= high){
        middle = (low+high)/2;
        if(k == x[middle]){
            return middle;
        }
        else if(k<x[middle]){
            high = middle-1;
            }
        else{
            low = middle +1;
        }

    }
    return -1;
}