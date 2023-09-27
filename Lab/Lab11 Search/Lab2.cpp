#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>
#include <cmath>

using namespace std;

const int student = 3;
const int exams = 4;

int max(int array[student][exams], int st, int ex){
    int most=0;
    for (int i = 0; i < st; i++){
        for(int j=0; j<ex; j++){
            if (array[i][j] >= most){
                most = array[i][j];
            }
        }
    }
    return most;
}
int min(int array[student][exams], int st, int ex){
    int least=100;
    for (int i = 0; i < st; i++){
        for(int j=0; j<ex; j++){
            if (array[i][j] <= least){
                least = array[i][j];
            }
        }
    }
    return least;
}
double avg(int array[exams],int ex){
    double sum = 0.0;
    for(int i=0;i<ex;i++){
        sum+= array[i];
    }
    return sum/ex;

}

int main(){
    
    int studentGrade[student][exams] = {{77,68,86,73},{96,87,89,78},{70,90,86,81}};

    cout << "Lowest Grade: " << min(studentGrade,student,exams)<<endl;
    cout << "Highest Grade: " << max(studentGrade,student,exams)<<endl;

    cout << "The avg grade for student 0 is " << avg(studentGrade[0], exams) << endl;
    cout << "The avg grade for student 1 is " << avg(studentGrade[1], exams) << endl;
    cout << "The avg grade for student 2 is " << avg(studentGrade[2], exams) << endl;
}