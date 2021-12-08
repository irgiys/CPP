#include <iostream>

using namespace std;
int main()
{
  int a, b;

  cout << endl << "Input a value : "; cin >> a;
  cout << endl << "Input b value : "; cin >> b;

  cout << endl << "\t=====================";
  // if (a greater or equal to b is true)
  if(a >= b){
    // do something
    cout << endl << "a is greater or equal to b";
  }else{
    // otherwise
    cout << endl << "b is greater than a";
  }
  
}