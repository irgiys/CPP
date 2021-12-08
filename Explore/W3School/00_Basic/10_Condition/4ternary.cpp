#include <iostream>

using namespace std;
int main()
{
  int a, b;
  // string result;
  cout << endl << "Input a value : "; cin >> a;
  cout << endl << "Input b value : "; cin >> b;

  cout << endl << "\t======================";

  // if (a is lower than b) ? true do something here  :  false do something here;
  (a < b) ? cout << endl << "b is greater than a" : cout << endl <<  "a is greater than b";

  return 0;
}