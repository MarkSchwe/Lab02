#include <iostream>
#include "point.h"
using namespace std;

int main(){
point p1(0,0);
point p2(12,30);
float dist;

dist = p1 + p2;
cout << "The distance between p1 and p2 is " << dist << endl;

return 0;
}

