/*
Define a class Complex to represent a complex number with instance variables a and b to store real and imaginary parts. Also define following member functions
a. void setData(int,int)
b. void showData()
c. Complex add(Complex)
*/
#include <iostream>
using namespace std;

class Complex{
		  private:
					 int a, b;
		  public:
					 void setData(int x, int y){
								a=x;
								b=y;
					 }
					 void showData(){
								cout<<"real="<<a<<" imag="<<b<<endl;
					 }
					 Complex add(Complex C){
								Complex temp;
								temp.a=a+C.a;
								temp.b=b+C.b;
								return temp;
					 }
};

int main(){
		  Complex C1, C2, C3;
		  C1.setData(3,7);
		  C2.setData(5,8);

		  C1.showData();
		  C2.showData();

		  C3=C1.add(C2);
		  C3.showData();

		  return 0;
}

