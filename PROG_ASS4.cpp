/*calculates the NET INCOME
 NOLLY D. DOINOG
 BSCPE 2-1D
 PROGRAMMING ASSIGNMENT #3
*/


#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main ()
{
  

  cout<<"          MCDONALDS PAYSLIP"<<endl;
   
    string NAME1,NAME2,NAME3;
  cout<<"\nCREW NAME: ";
  cin>>NAME1>>NAME2>>NAME3; 
  cout<<"\n";
    int TWH;
  cout<<"TOTAL NO. OF WORKING HOURS: ";
  cin>>TWH;
    int BS;
    BS=TWH*64;
  cout<<"BASIC SALARY: "<<BS<<endl;
  cout<<"\n OVERTIME: ";
    int OT,OS,T_SALARY;
  cin>>OT;
    OS=OT*64;
  cout<<"OVERTIME SALARY: "<<OS<<endl;
    
  cout<<"---------------------------------------"<<endl;
    T_SALARY=OS+BS;
  cout<<"TOTAL SALARY:"<<T_SALARY<<endl;
    
  cout<<"---------------------------------------"<<endl;
    
  int PGI,tin;
  float sss;
    sss=T_SALARY*.10;
    PGI=114;
    tin=105;

  cout<<"SALARY DEDUCTION:        "<<endl;
  cout<<"SSS: "<<sss<<endl;
  cout<<"PAG-IBIG: "<<PGI<<endl;
  cout<<"TIN: "<<tin<<endl;
  
    int TSD;
        TSD=sss+PGI+tin;  
  cout<<"---------------------------------------"<<endl;
  cout<<"TOTAL SALARY DEDUCTION: "<<TSD<<endl;
  cout<<"---------------------------------------"<<endl;
  cout<<"\n\n";
  
 
cout<<"---------------------------------------"<<endl;
    int NIC;
          NIC=T_SALARY-TSD;
  cout<<"           NET INCOME: "<<NIC<<endl;
cout<<"---------------------------------------"<<endl;
    
     return 0;
    

}


