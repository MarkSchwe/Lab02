#include <iostream>

using namespace std;

void findAverage(int arr2d[][10], int rows, float avg[]){
float avgf;
for (int i = 0; i < rows; i++){
    avgf = 0;
    for (int k = 0; k < 10; k++){
        avgf += arr2d[i][k];
    }
    avgf /= 10;
    avg[i] = avgf;
}

}

int main(){
    srand(time(0));
int arr2d[3][10];
for (int i = 0; i < 3; i++){
    for (int k = 0; k < 10; k++){
    arr2d[i][k] = rand()%101;
    }
}
float avg[3];
findAverage(arr2d, 3, avg);
for (int i = 0; i < 3; i++){
    cout << avg[i] << endl;
}

}
