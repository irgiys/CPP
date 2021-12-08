#include <iostream>

using namespace std;
int main()
{
  int x;
  cout << "Input x value : "; cin >> x;
  // at least execute once if while condition false
  do{
    x % 2 == 0 && cout << endl << x;
    x++;
  }
  while(x < 100);

  return 0;
}