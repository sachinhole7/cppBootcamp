// Write a program to copy the contents of one text file to another while changing the case of every alphabet.
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

int main(){
   
   string FILE1, FILE2, line;
   FILE1 = "f1.txt";
   FILE2 = "f2.txt";

   // open file in read mode
   ifstream fin;
   fin.open(FILE2);

   // open file in append mode
   ofstream fout;
   fout.open(FILE1, ios::app);
   
   while(!fin.eof()){
      // read from file
      getline(fin, line);
      // change letters to upper case
      toupper(line);
      // write to the file
      fout << line;
   }   
   
   fin.close();
   fout.close();

   return 0;
}

