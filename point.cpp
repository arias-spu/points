#include "point.h"
#include <string>
#include <sstream>
#include <cmath>
using std::string;
using std::stringstream;


Point::Point(double x, double y):_x(x), _y(y){
}
string Point::toString() const{
	stringstream ss;
	ss << "[" << _x << ", " << _y << "]";
	return ss.str();
}
double Point::distance(const Point& other)const{
	return sqrt(pow(_x - other._x, 2) + pow(_y - other._y, 2));
}
