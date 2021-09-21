//main
#include <iostream>
#include "line.h"
using namespace std;
line * MakeLineArray(int size)
{
    line *newlines = new line[size];
    return newlines;
}

void sortLine (line * ptr, int size)
{
bool swap;
line temp1;
line temp2;
for (int i = 0; i < size; i++){
    swap = false;
    for (int k = 0; k < size - 1; k++){
        if(ptr[k].getLength() > ptr[k+1].getLength()){
            temp1 = ptr[k];
            temp2 = ptr[k+1];
            ptr[k] = temp2;
            ptr[k+1] = temp1;
            swap = true;
        }
    }
    if (swap == false){
        break;
    }
}
}

line Shortest (line * ptr, int size)
{
    line shortestline;
for (int i = 0; i < size; i++){
    if(ptr[i].getLength() < shortestline.getLength()){
        shortestline = *(ptr + i);
    }
}
return shortestline;
}

int main()
{
    int size = 100;
line * ptr, shortest;
// call MakeLineArray to create an array of 100 pointers
// to Line objects
ptr = MakeLineArray(size);

// For each Line object created above, ask user to enter
// the x and y coordinate for the two end points and
// call appropriate member functions to set the coordinate of
// the two end points of each Line object.
float xval = 0;
float yval = 0;
point temp;
cout << "Input X and Y values for each line point: " << endl;
for (int i = 0; i < size; i++){
    cout << "For the beginning:" << endl;
    cout << "X: ";
    cin >> xval;
    temp.SetX(xval);
    cout << endl;
    cout << "Y: ";
    cin >> yval;
    temp.SetY(yval);
    ptr[i].setBegin(temp);
    cout << "For the end: " << endl;
    cout << "X: ";
    cin >> xval;
    temp.SetX(xval);
    cout << endl;
    cout << "Y: ";
    cin >> yval;
    temp.SetY(yval);
    ptr[i].setEnd(temp);
}

// Call appropriate function to find the shortest line segment
shortest = Shortest(ptr, size);

// Call appropriate member functions to display the coordinate of
// the two end points of the shortest line segment
shortest.showCoordinate();
return 0;
}

