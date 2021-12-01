#include <iostream>

using namespace std;
int main()
{
  int x;
  cout << "Input x value : "; cin >> x;
  // only execute if while condition is true
  while (x < 100){
    x % 2 == 0 && cout << endl << x;
    x++;
  }
  
  return 0;
}