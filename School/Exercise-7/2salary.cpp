#include <iostream>
using namespace std;

int main()
{
  char name[50];
  float basicSal, netSal, allowance, tax;
  const float allowancePers = 0.2;
  const float taxPers = 0.15;


  cout << endl << "Employee Name: "; cin >> name;
  cout << "Basic Salary: "; cin >> basicSal;

  allowance = taxPers * basicSal;
  tax = taxPers * ( basicSal + allowance);
  netSal = basicSal + allowance - tax;

  cout << endl ;
  cout << "Empolyee name: " << name << endl << "Net Salary: " << netSal;
  
  return 0;
}