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
