// Define a function to find the highest value digit in a given number.
#include <iostream>

using namespace std;

int highestDigit(int);

int main(){
	int num;
	cout << "Enter Number: ";
	cin >> num;
	cout << "highest Value of digit in Number " << num << " is " << highestDigit(num) << endl;
	return 0;
}

int highestDigit(int num){
	int high=0, rem=0; 
	while(num){
		rem = num%10;
		num = num/10;

		if(high < rem){
			high = rem;
		} 
	}
	return high;
}

