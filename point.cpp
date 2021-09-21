
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
