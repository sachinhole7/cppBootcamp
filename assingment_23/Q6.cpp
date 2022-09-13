// Write a C++ program to calculate an average of 3 numbers.
#include <iostream>

using namespace std;

int main(){
	int n1, n2, n3;
	float avg;
	cout << "Enter Three Numbers: " << endl;
	cin >> n1 >> n2 >> n3;
	avg = (n1 + n2 + n3)/3;
	cout << "Average of 3 Numbers: " << avg << endl;

	return 0;
}
