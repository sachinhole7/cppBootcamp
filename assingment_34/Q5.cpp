// Write a C++ program to merge the two files.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
   string FILE1, FILE2, line;
   FILE1 = "f1.txt";
   FILE2 = "f2.txt";

   // open file in read mode
   ifstream fin;
   fin.open(FILE2);

   if(!fin){
      cout << "Error! File not found..." << endl;
      exit(0);
   }

   // open file in append mode
   ofstream fout;
   fout.open(FILE1, ios::app);

   while(!fin.eof()){
      // read from file
      getline(fin, line);
      // write to the file
      fout << line << "\n";
   }

   fin.close();
   fout.close();

   return 0;
}
