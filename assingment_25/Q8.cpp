// Define a class Rectangle and define an instance member function to find the area of the rectangle.
#include <iostream>
using namespace std;

class Rectangle{
		  private:
					 int l, b;
		  public:
                void inputValue(){
                        cout<<"Enter Length and Breadth of Rectangle: ";
                        cin>>l>>b;
                }
					 void setValue(int x, int y){
					         l=x;
                        b=y;
					 }
                float area(){
                        return l*b;
                }
};

int main(){
        Rectangle rec;

        //rec.setValue(6,7);
        rec.inputValue();
        cout<<"Area: "<<rec.area()<<endl;

        return 0;
}
