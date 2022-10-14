// A file 'Employee.txt' contains empno and empname. Write a C++ program to add and read contents of this file and search for an employee whose name is 'XYZ’.
#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int EMP_ID;

class Employee{
   private:
      int empNo;
      string empName;
   public:
      // add new employee
      void addEmp(string fileName){
         ofstream fout; 
         fout.open(fileName, ios::app);
         
         cout << "Enter New Employee Name: ";
         fflush(stdout);
         getline(cin, empName);
         EMP_ID++;
         fout << EMP_ID << endl;
         fout << empName <<endl;
         fout.close();

         ofstream fin; 
         fin.open("empId.txt");
         fin << EMP_ID;
         fin.close();
      }
      // show all employee
      void showEmpData(string fileName){
         string line;
         ifstream fin;
         fin.open(fileName);
         cout << "ID   EMP NAME ---------------------" << endl << endl;
         while(!fin.eof()){
            getline(fin, line);
            cout << line << "   ";
            getline(fin, line);
            cout << line << endl;
         }
         cout << "--------------------------------------" << endl;
         fin.close();
      }
      // search employee
      void searchEmp(string fileName){
         string line, query, ID;
         ifstream fin;
         fin.open(fileName);
         
         cout << " Enter Employee Name: ";
         fflush(stdout);
         getline(cin, query);
         
         cout << "ID   EMP NAME ---------------------" << endl << endl;

         while(!fin.eof()){
            fflush(stdout);
            getline(fin, ID);
            fflush(stdout);
            getline(fin, empName);
            
            if(query == empName){
               cout << ID << "  " << empName << endl << endl;
               break;
            }
         }
         cout << "--------------------------------------" << endl;
         fin.close();
         exit(0);
 
      }

};

int main(){
   // create id file
   //ofstream fout;
   //fout.open("empId.txt"); 
   //fout.close();

   // read id from file
   ifstream fin;
   fin.open("empId.txt");
   if(!fin){ cout << "file not found.." << endl; exit(0);}
   fin >> EMP_ID; 
   fin.close();

   cout << EMP_ID << endl;

   Employee EMP;
   string EMP_FILE = "Employee.txt";
   while(true){
      cout << " A) Add Employee Data." << endl;
      cout << " D) Show Employee Data." << endl;
      cout << " S) Search Employee." << endl;
      cout << " Q) Exit" << endl;
      cout << " >>> Choose option to continue: ";
      char c = getchar();
      getchar();
      switch(c){
         case 'A' : // write file
         case 'a' :
                  EMP.addEmp(EMP_FILE);
                  break;
         case 'D' : // read file
         case 'd' :
                  EMP.showEmpData(EMP_FILE);
                  break;
         case 'S' : // serach Emp
         case 's' :
                  EMP.searchEmp(EMP_FILE);
                  break;
         case 'Q' : // quit
         case 'q' : 
                  return 0;
                  break;
      }
   }

   return 0;
}

