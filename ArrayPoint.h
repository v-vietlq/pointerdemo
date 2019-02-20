#pragma once
#include <iostream>
#include <fstream>
using namespace std;

//struct Point
//{
//	int x, y;
//};
class Point
{
public:
	int x, y;
	Point();
	~Point();
};



class ArrayPoint
{
private:
	Point *a;
	int n;
public:
	bool loadFile(const char *path);
	double Distance(Point p);
	int Compare(Point p, Point q);
	void Sort();
	bool saveFile(const char *path);
	ArrayPoint();
	~ArrayPoint();
};

