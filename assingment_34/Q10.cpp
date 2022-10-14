/* Write a C++ program to create a file which has information Name, Account number, Balance and perform following operations:
a. Add record
b. Display content of file
c. Display name of person having balance > 10,000
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Account{
   private:
      string name,
             acNo,
             acBalance;
   public:
      // add records to file
      void addRecord(string FILENAME){
         ofstream fout;
         fout.open(FILENAME, ios::app);
         fflush(stdout);

         cout << "Enter a Name: ";
         getline(cin, name);
         cout << "Enter Account Number: ";
         cin >> acNo;
         cout << "Entet Account Balance: ";
         cin >> acBalance;

         fout << name << endl;
         fout << acNo << endl;
         fout << acBalance << endl;

         fout.close();
      }
      // display content of file
      void showContent(string FILENAME){
         ifstream fin;
         fin.open(FILENAME);

         string line;
         while(!fin.eof()){
            fflush(stdout);
            getline(fin, line);
            cout << line << endl;
         }

         fin.close();
      }
      // display name of person having balance > 10000
      string personName(string FILENAME){
         ifstream fin;
         fin.open(FILENAME);
         
         string NAME;
         
         while(!fin.eof()){
            fflush(stdout);
            getline(fin, name);
            getline(fin, acNo);
            getline(fin, acBalance);

            if(acBalance > "10000"){
               NAME = NAME + name + "\n";
            }
         }         

         fin.close();
         return NAME;
      }
};

int main(){
   Account REC;
   string RECFILE = "rec.txt";

   while(true){
      cout << "a. Add Record." << endl
           << "b. Display Content of file." << endl
           << "c. Display Name of person having balance > 10000." << endl
           << "q. Quit." << endl
           << "Choose option to continue: ";
      fflush(stdout);
      char c = getchar();
      getchar();
      switch(c){
         case 'a' : // Add Record
                  REC.addRecord(RECFILE);
                  break;
         case 'b' : // Display content of file
                  REC.showContent(RECFILE);
                  break;
         case 'c' : // Display Name of person Having balance > 10000.
                  cout << REC.personName(RECFILE);
                  break;
         case 'q' : // exit/quit
                  return 0;
      }
   }

   return 0;
}

