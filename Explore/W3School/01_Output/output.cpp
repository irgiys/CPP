#include <iostream>
#include <string>
using namespace std;

int main()
{
  string name = "irgi";
  // You can put << as you want after cout statement before ;
  // However, this is very handy when you want too add expression or variable to the output
  cout << "Helllo I'am " << name;
  // To add new line you can use endl or "\n"
  cout << endl << "\n";
  
  cout << 9 + 10 << endl << "WOw \nWaw";

  return 0;
}