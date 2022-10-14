// There are 50 records in a file. Each record contains 6-character item-code, 20 characters for item-name and an integer price. Write a program to read these records, arrange them in the descending order of price and write them in the same file, overwriting the earlier records.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
   string records, line, id, tmp;

   ifstream fin;
   fin.open("records.txt");
   
   if(!fin){
      cout << "File not found.." << endl;
      exit(0);
   }

   while(!fin.eof()){
      // get id
      for(int i=0; i<6; i++){
         tmp = fin.get();
         id = id + tmp;
      }
      // get line
      fin.seekg(0, ios_base::beg);
      getline(fin, line);

      // arrange in desending order
      if(id < 
         
   }

   return 0;
}

