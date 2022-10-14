/*  Acompany has following details of their employees in the file ‘'emp.dat'
a. Emp ld
b. Emp Name
c. Emp Address
d. Emp Dept (Admin/Sales/Production/IT)
e. Emp Phone
f. Emp Age
Write a C++ program to read the above file. Create a new file such as Adm.dat, Sal.dat, Pro.dat, |T.dat respectively to store the employee details according to their department.
*/
#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Employee{
   private:
      string empId,
             empName,
             empAddress,
             empDept; // (Admin/Sales/Production/IT)
      string empPhone,
             empAge;
   public:
      // write file
      void writeFile(Employee EMP, string FILENAME){
         ofstream fout;
         fout.open(FILENAME, ios::app);
         fout << EMP.empId << endl;
         fout << EMP.empName << endl;
         fout << EMP.empAddress << endl;
         fout << EMP.empDept << endl;
         fout << EMP.empPhone << endl;
         fout << EMP.empAge << endl;
         fout.close();
      }
      // sort employee by department
      void sortEmp(string FILENAME){
         //Employee EMP;

         ifstream fin;
         fin.open(FILENAME);
         while(!fin.eof()){
            getline(fin, empId);
            getline(fin, empName);
            getline(fin, empAddress);
            getline(fin, empDept);
            getline(fin, empPhone);
            getline(fin, empAge);
            
            if(empDept == "Admin"){
               // admin dept
               writeFile(*this, "Adm.dat");
            }
            else if(empDept == "Sales"){
               // sales dept
               writeFile(*this, "Sal.dat");
            }
            else if(empDept == "Production"){
               // production dept
               writeFile(*this, "Pro.dat");
            }
            else if(empDept == "IT"){
               // IT dept
               writeFile(*this, "IT.dat");
            }
         }

      }
};

int main(){
   
   Employee EMP;

   EMP.sortEmp("Emp.dat");

   return 0;
}

