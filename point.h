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
