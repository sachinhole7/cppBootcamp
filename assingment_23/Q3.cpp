// Write a C++ program to calculate the sum of two numbers.
#include <iostream>

using namespace std;

int sum(int, int);

int main()
{
	int x=7, y=4;
	cout << "Sum of" << x << " and " << y << " is " << sum(x, y) << endl;
	return 0;
}

int sum(int x, int y){
	return x+y;
}

