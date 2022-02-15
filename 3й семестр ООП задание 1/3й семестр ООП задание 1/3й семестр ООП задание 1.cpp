#include <iostream>
#include "Ob.h"
#include "Triangle.h"
#include "Pentagon.h"
using namespace std;
int main()
{
	Triangle T1(5, 4, 3, 0, 0);
	Triangle T2(3, 4, 9, 6, 1);
	Pentagon P1(2, 4, 5);
	Pentagon P2(0, 0, 7);

	T1.move(4, 5);
	cout << "(" << T1.x << "," << T1.y << ")" << endl;

	P1.move(10, 1);
	cout << "(" << P1.x << "," << P1.y << ")" << endl;

	T1.compare(T2);
	T2.compare(P1);
	P1.compare(T1);
	P1.compare(P2);


}