pointtest:	point.o main.o
	g++ main.o point.o -o point
point.o:	point.h point.cpp
	g++ -c point.cpp
main.o:	main.cpp point.h
	g++ -c main.cpp
