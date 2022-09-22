// Define a function to check whether a given number is a Prime number or not.
#include <iostream>

using namespace std;

void isPrimeNumber(int);

int main(){
	int num;
	cout << "Enter a Number: " << endl;
	cin >> num;
	isPrimeNumber(num);
	return 0;
}

void isPrimeNumber(int num){
	int i, rem=0, count=0;
	for(i=1; i<=num; i++){
		rem = num%i;
		if(rem == 0){
			count++;
		}
	}
	if(count == 2){
		cout << "A Number " << num << " is Prime Number" << endl;
	}
	else{
		cout << "A Number " << num << " is not Prime Number" << endl;		
	}
}

