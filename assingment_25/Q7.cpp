// Define a class Greatest and define instance member function to find Largest among 3 numbers using classes.
#include <iostream>
using namespace std;

class Greatest{
		  private:
					 int num1, num2, num3;
		  public:
					 void setNum(int x, int y, int z){
								num1=x;
								num2=y;
								num3=z;
					 }
					 void showGreatest(){
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
		  Greatest num1;
		  
		  num1.setNum(1,2,3);
		  num1.showGreatest();
		  
		  return 0;
}
