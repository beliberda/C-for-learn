#include "boat.h"
#include <iostream>
using namespace std;
boat::boat() {
	weight = 0;
	heigh = 0;
	lengh = 0;
	width = 0;
}
boat::boat(int weight, int lengh, int heigh, int width, int speed)
	:water_transport(weight, lengh, heigh, width, speed)
{

}
void boat::info() {
	this->water_transport::info();
	cout << "It's boat " << endl;
}
void boat::moveforward()
{
	cout << "boat move forward" << endl;
}
void boat::moveback()
{
	cout << "boat move back" << endl;

}
