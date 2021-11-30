#include <iostream>

using namespace std;
int main()
{
  int a, b;
  cout << endl << "Input a value : "; cin >> a;
  cout << endl << "Input b value : "; cin >> b;

  cout << endl << "\t==========================";
  // if (true)

  if(a > b){
    // do something
    cout << endl << "a is greater than b";
  }

  if(a < b){
    cout << endl << "b is greater than a";
  }

  return 0;
}