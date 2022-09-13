// Write a C++ program to swap values of two int variables without using third variable
#include <iostream>

using namespace std;

int main (){
	int x = 7, y = 9;
	cout << x << " " << y << endl;
	x = x + y;
	y = x - y;
	x = x - y;
	cout << x << " " << y << endl;
	return 0;
}


