#include "ArrayPoint.h"
int main()
{
	ArrayPoint Arr;
	Arr.loadFile("input.txt");
	Arr.Sort();
	Arr.saveFile("output.txt");
	system("pause");
}