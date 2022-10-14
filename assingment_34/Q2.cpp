// Write a C++ program to read a text file and count the number of characters in it.
#include <iostream>
#include <fstream>
using namespace std;

int main(){
   
   ifstream fin; string line;
   fin.open("myfile.txt");
   
   getline(fin, line);
   cout << line.size() << endl;   
   
   fin.close();
}
