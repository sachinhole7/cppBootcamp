// Write a C++ program to calculate the area of a circle
#include <iostream>
# define PI 3.14

using namespace std;

int areaOfCircle(float);

int main(){
	float r = 21.0;
	cout << "Area of Circle of Radius " << r << " is " << areaOfCircle(r) << endl;
	return 0;
}

int areaOfCircle(float radius){
	return PI * (radius * radius);
}

