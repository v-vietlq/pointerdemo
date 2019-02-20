#include "ArrayPoint.h"


Point::Point()
{
}

Point::~Point()
{
}

ArrayPoint::ArrayPoint()
{
}


ArrayPoint::~ArrayPoint()
{
}

double ArrayPoint::Distance(Point p)
{
	return sqrt(p.x*p.x + p.y * p.y);
}
int ArrayPoint::Compare(Point p, Point q)
{
	if (Distance(p) < Distance(q)) return -1;
	else if (Distance(p) == Distance(q)) return 0;
	else return 1;
}
bool ArrayPoint::loadFile(const char *path)
{
	ifstream fi;
	fi.open(path);
	if (!fi.is_open()) return false;
	int n;
	fi >> n;
	this->n = n;
	a = new Point[n];
	for (int i = 0; i < n; i++)
	{
		int x, y;
		fi >> x;
		fi >> y;
		a[i].x = x;
		a[i].y = y;
	}
	fi.close();
	return true;
}
bool ArrayPoint::saveFile(const char *path)
{
	ofstream fo;
	fo.open(path);
	if (!fo.is_open()) return false;
	for (int i = 0; i < n; i++)
	{
		fo << a[i].x << " " << a[i].y << endl;
	}
	fo.close();
	return true;
}

void ArrayPoint::Sort()
{
	for (int i = 0; i < n-1; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (Compare(a[i], a[j]) == -1)
			{// a[i] < a[j]
				Point temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}
		}
	}
}