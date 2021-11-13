#include <iostream>
using namespace std;

int main()
{
  // DECLARING
  int myNum = 10;
  double myFloatNum = 5.99;
  char myLetter[50];
  bool myBoolean = true;
  string myText = "Hellooo";

  // Multiple Declarations
  int x = 20, y = 2, z = 21;
  // x = 20;
  // y = 10;
  // z = 30;

  // CONSTANT 
  const int constInt = 90;

  cout << "Input Character : "; cin >> myLetter; 
  // REDECLARING
  myNum = 2;

  // constInt = 2; // Error: Assigment

  cout << "This is Integer : " << myNum << endl;
  cout << "This is Constant Int : " << constInt  << endl;
  cout << "This is Floating point number : " << myFloatNum << endl;
  cout << "This is Character : " << myLetter << endl;
  cout << "This is Boolean : " << myBoolean << endl;
  cout << "This is String  : " << myText << endl;
  cout << "x value is : " << x << endl;
  cout << "y value is : " << y << endl;
  cout << "z value is : " << z << endl;
  

  return 0;
}