// A comment
#include <iostream>
#include "point.h"
using namespace std;

int main(int argc, char* argv[]){
	Point t(1,5), r(0,-1), s(0,0);
	cout << t.toString() << endl;
	cout << r.toString() << endl;
	cout << t.distance(r) << endl;
	cout << s.distance(r) << endl;
	return 0;
}
