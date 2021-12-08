#include <iostream>
#include <string>

using namespace std;
int main(){
  string food = "fizaa";
  string &meal = food; // using & operator 

  cout << food << endl;
  cout << meal << endl;
  cout << "Memory address foood : " << &food << endl; // using & to get memory address of variable

  return 0;
}