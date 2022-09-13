// Write a C++ program to calculate the volume of a cuboid.
#include <iostream>

using namespace std;

float volumeOfCuboid(int, int, int );

int main(){
	int length = 21, breadth= 11, height = 7;
	cout << "Volume of Cuboid is " << volumeOfCuboid(length, breadth, height) << endl;
	return 0;
}

float volumeOfCuboid(int l, int b, int h){
	return l * b * h;
}

