// Define a class Time to represent Time (like 3 hr 45 min 20 sec). Declare appropriate
// number of instance member variables and also define instance member functions to
// set values for time and display values of time.
#include <iostream>
using namespace std;

class Time{
		  private:
					 int hr, min, sec;
		  public:
					 void setTime(int h, int m, int s){
								if(h<24){ hr=h; }
								if(m<60){ min=m;}
								if(s<60){ sec=s;}
					 }
					 void showTime(){
								cout<<hr<<" hr "<<min<<" min "<<sec<<" sec."<<endl;
					 }
};

int main(){
		  Time LUNCH;
		  LUNCH.setTime(12,30,00);
		  LUNCH.showTime();
		  return 0;
}

