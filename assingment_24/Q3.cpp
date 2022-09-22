// Define a function to calculate x raised to the power y.
#include <iostream>

using namespace std;

int xPowerY(int, int);

int main(){
	int base, power;
	cout << "Enter Base and power: ";
	cin >> base >> power;
	cout << base << " base power " << power << " is " << xPowerY(base, power) << endl;
	return 0;
}

int xPowerY(int x, int y){
	int i, num=1;
	for(i=1; i<=y; i++){
		num = num * x;
	}
	return num;
}
