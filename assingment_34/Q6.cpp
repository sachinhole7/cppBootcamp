// Write a C++ program that counts the total number of characters, words and lines in the file.
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
using namespace std;

class Count{
   private:
      int count;
   
   public:
      // read file
      string readFile(string fileName){
         string line, str;   
         ifstream fin;
         fin.open(fileName);
         while(!fin.eof()){
            getline(fin, line);
            line = line + "\n";
            str = str  + line;
         }
         fin.close();
         return str;
      }
      // count characters
      int characters(string fileName){
         return readFile(fileName).size();
      }
      // count spaces
      int spaces(string fileName){
         
      }
};

int main(){

   Count c;

   cout << c.readFile("f1.txt") << c.characters("f1.txt") << endl;

   return 0;
}

