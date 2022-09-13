// Define a class Factorial and define an instance member function to find the Factorial of a number using class.
#include <iostream>
using namespace std;

class Factorial{
		  private:
					 int number;
		  public:
					 void setNum(int num){
								number=num;
					 }
					 int factorial(){
								int i, fact=1;
								for(i=1; i<=number; i++){
										  fact=fact*i;
								}
								return fact;
					 }
};

int main(){
		  Factorial NUM;
		  int FACT;

		  NUM.setNum(7);
		  FACT=NUM.factorial();

		  cout<<FACT<<endl;
		  return 0;
}

