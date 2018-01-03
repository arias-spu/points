#pragma once
#include <string>
using std::string;
class Point{
	double _x, _y;
  public:
	Point(double=0, double=0);
	string toString() const;
	double distance(const Point&)const;
};
