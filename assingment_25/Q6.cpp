// Define a class Square to find the square of a number and write a C++ program to Count number of times a function is called. 
#include <iostream>
using namespace std;

class Square{
		  private:
					 int num, square, count;
		  public:
					 void setNum(int N){
                        num=N;
                }
					 int getsquare(){
								static int n=0;
								n++; 
								count=n;
								return num*num;
					 }
					 int getCount(){
								return count;
					 }
};

int main(){
		  
		  Square s, s2;

		  s.setNum(7);
		  s2.setNum(23);
		  cout<<s.getsquare()<<endl;
		  cout<<s2.getsquare()<<endl;
		  cout<<s2.getCount()<<endl;

		  return 0;
}

