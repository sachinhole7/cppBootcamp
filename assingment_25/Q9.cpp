// Define a class Circle and define an instance member function to find the area of the circle.
#include <iostream>
using namespace std;

class Circle{
        private:
                int radius;
                float PI=3.14;
        public:
                void inputRadius(){
                        cout<<"Enter Radius of circle: ";
                        cin>>radius;
                }
                void setRadius(int r){
                        radius=r;
                }
                float area(){
                        return PI*radius*radius;
                }
};

int main(){
        Circle c;
        
        c.inputRadius();
        //c.setRadius(7);
        cout<<"Area: "<<c.area()<<endl;

        return 0;
}
