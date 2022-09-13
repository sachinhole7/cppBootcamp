// Define a class LargestNumber and define an instance member function to find the Largest of three Numbers using the class.
#include <iostream>
using namespace std;

class LargestNumber{
		  private:
					 int num1, num2, num3;
		  public:
					 void setNum(int x, int y, int z){
								num1=x;
								num2=y;
								num3=z;
					 }
					 void showLargestNumber(){
								if(num1>num2){
										  if(num1>num3){
													 cout<<"("<<num2<<","<<num3<<") < "<<num1<<endl;
										  }
								}
								else if(num2>num3){
												 cout<<"("<<num1<<","<<num3<<") < "<<num2<<endl;
									  }
								else{
											 cout<<"("<<num1<<","<<num2<<") < "<<num3<<endl;
								}
								
					 }
};

int main(){
		  LargestNumber num1;
		  
		  num1.setNum(1,2,3);
		  num1.showLargestNumber();
		  
		  return 0;
}
