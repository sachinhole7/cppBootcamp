// Write a C++ program to create a file and print “File created successfully” and throw an error if file is not created.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
   ofstream fout;
   fout.open("myfile.txt");

   if(fout){
      cout << "File created successfully..." << endl;
   }
   else{
      cout << "Error! File canot created..." << endl;
   }

   return 0;
}
