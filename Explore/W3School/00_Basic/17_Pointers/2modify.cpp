#include <iostream>
#include <iostream>

using namespace std;
int main(){
  string food = "Pizza";
  string *ptr = &food;

  cout << food << " Value" << endl;
  cout << &food << " Memory" << endl;

  cout << ptr << endl;
  cout << *ptr << " Memory address of food" << endl;
  *ptr = "Hamburger"; // change memory value of the pointer 
  cout << *ptr << " New value of the pointer" << endl;

  cout << food << " New variable of the food variable" << endl;

  return 0;
}