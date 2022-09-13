// Define a class ReverseNumber and define an instance member function to find Reverse of a Number using class.
#include <iostream>
using namespace std;

class ReverseNumber{
		  private:
					 int rev=0, num, n, rem;
		  public:
					 void input(){
								cout<<"Enter a Number: ";
								cin>>num;
								n=num;
					 }
					 void calc(){
								while(num){
										  rem=num%10;
										  rev=(rev*10)+rem;
										  num=num/10;
								}
					 }
					 void show(){
								cout<<"Reverse of [ "<<n<<" ] is :: "<<rev<<endl;
					 }
};

int main(){
		  ReverseNumber n;
		  n.input();
		  n.calc();
		  n.show();
		  return 0;
}

