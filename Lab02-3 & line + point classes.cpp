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

//line class (header then implementation)

#ifndef LINE_H
#define LINE_H

#include <iostream>
#include "point.h"

class line
{
public:
// constructors
line();
line(point b, point e);
// set the beginning point of the Line
void setBegin(point b);
// set the end point of the Line
void setEnd(point e);
// return the length of the line segment
double getLength();
// display the x and y coordinate of begin and end point.
void showCoordinate();
void operator = (line rhs);
private: // Point is the class you defined in question 4
point begin;
point end;
};

#endif

//implementation:
#include<iostream>
#include "line.h"
#include "point.h"

line::line(){
    point nullpoint(0,0);
    begin = nullpoint;
    end = nullpoint;
}

line::line(point b, point e){
    begin = b;
    end = e;
}

void line::setBegin(point b){
    begin = b;
}
// set the end point of the Line
void line::setEnd(point e){
    end = e;
}
// return the length of the line segment
double line::getLength(){
    float length = begin + end;
    double doublength = (double) length;
    return doublength;
}

void line::showCoordinate(){
    cout << "X: " << begin.GetX() << endl << "Y: " << begin.GetY() << endl << "And for the end: " 
    << endl << "X: " << begin.GetX() << endl << "Y: " << begin.GetY() << endl;

}
void line::operator = (line rhs){
    begin = rhs.begin;
    end = rhs.end;
}

//point class (header then implementation):

#ifndef POINT_H
#define POINT_H

#include <iostream>
#include <fstream>

using namespace std;

class point
{
public:
  point();

  point(float extx, float exty);

  void SetX(float extx);
  void SetY(float exty);
  

  float GetX();
  float GetY();

  float operator + (point & rhs);
  point operator = (point & rhs);

 private:
  float x;
  float y;
};

#endif

//implementation:

#include "point.h"

#include <iostream>

using namespace std;

point::point(){
    x = 0;
    y = 0;
}


point::point(float extx, float exty){
    x = extx;
    y = exty;
}

void point::SetX(float extx){
    x = extx;
}

void point::SetY(float exty){
    y = exty;
}

float point::GetX(){
return x;
}

float point::GetY(){
return y;
}

float point::operator + (point & rhs){
  float dist = x +rhs.GetX() + y + rhs.GetY();
    return dist;
}

point point::operator = (point & rhs){
    float xval = rhs.GetX();
    float yval = rhs.GetY();
    SetX(xval);
    SetY(yval);

    return *this;
}
