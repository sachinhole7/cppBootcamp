// Write a C++ program to open an output file 'a.txt' and append data to it
#include <iostream>
#include <fstream>
using namespace std;

int main(){
   ofstream fout;
   fout.open("a.txt", ios::app);
   fout << "my data" << endl;
   fout.close();
   return 0;
}

