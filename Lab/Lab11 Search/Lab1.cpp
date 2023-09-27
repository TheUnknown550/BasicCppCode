#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

int binarySearch(int array[], int key, int low, int high, int arraySize) 
{	
	int middle;
	while(low <= high){ 

		middle = (low+high)/2;
		if(key == array[middle]){
			return middle;
		} else if (key < array[middle]){
			high = middle - 1;
		} else {
			low = middle + 1;
		}
	}
	return -1;
}

int main(){
    srand(time(0));
    const int size = 50;
    int unsorted[size], sorted[size]; 
    for (int i=0; i<size;i++){ // Createa randomized array
        unsorted[i]=rand()%100;
    }

    cout << "Original unsorted random numbers:"<<endl; // output the original array
    for (int i = 0; i<size; i++){
        cout << setw(3) << unsorted[i] << " ";
        if (((i+1)%10)==0){
            cout << endl;
        }
    }
    
    for (int i =0 ; i<size;i++){ // Copy array
        sorted[i] = unsorted[i];
    }

    int check,hold;
    do{// Bubble Sort
        check = 0;
        for(int j = 0; j < size-1; j++){
			if (sorted[j] > sorted[j+1]){
				hold = sorted[j];
				sorted[j] = sorted[j+1];
				sorted[j+1] = hold;
				check = 1;
			}
		}
    }while(check == 1);

    cout << "Sorted numbers:"<<endl; // output the original array
    for (int i = 0; i<size; i++){
        cout << setw(3) << sorted[i] << " ";
        if (((i+1)%10)==0){
            cout << endl;
        }
    }

    int key, result, index;
    int indexs[size], i =0;
    cout << "Enter a number: ";
    cin >> key;
    index = binarySearch(sorted, key, 0, size-1, size);
    indexs[i] = index;
    i++;
    if (index != -1){
        for (int j = 1; j<=i;j++){
            if (sorted[index+j]==key){
                indexs[i] = index+j;
                i++;
            }
            if (sorted[index-j]==key){
                indexs[i] = index-j;
                i++;
            }
        }
        cout << "Index is at: ";
        for (int j = 0; j<i;j++){
            cout << indexs[j] << " ";
        }
            
    }else{
        cout << "No value.";
    }
        
}