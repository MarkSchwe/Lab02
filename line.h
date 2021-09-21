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
