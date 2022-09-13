// Define a class Area and define instance member functions to find the area of the different shapes like square, rectangle , circle etc.
#include <iostream>
using namespace std;

class Area{
        private:
                float PI=3.14;
        public: 
                float circle(float radius){
                        return PI*radius*radius;
                }
                float square(float side){
                        return side*side;
                }
                float rectangle(float l, float b){
                        return l*b;
                }
};
int main(){
        Area s, r, c;

        cout<<"Area of Square: "<<s.square(7)<<endl;
        cout<<"Area of Rectangle: "<<r.rectangle(7,21)<<endl;
        cout<<"Area of Circle: "<<c.square(7)<<endl;

        return 0;
}
