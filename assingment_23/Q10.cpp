// Write a C++ program to add all the numbers of an array of size 10.
#include <iostream>

using namespace std;

int addNum(int arr[]);

int main(){
	int arr[10] = {1,2,3,4,5,6,7,8,9,10};
	cout << addNum(arr) << endl;
	return 0;
}

int addNum(int arr[]){
	int i, sum=0;
	for(i=0; i<10; i++){
		sum = arr[i] + sum;
	}
	return sum;
}

