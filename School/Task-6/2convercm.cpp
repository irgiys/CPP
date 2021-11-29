#include <iostream>

using namespace std;
int main()
{
  double mm, cm, m, feet, inch, yard;

  cout << "Input meter : "; cin >> m;
  cm = 100 * m;
  mm = 1000 * m;


  feet = cm / 30.48;
  inch = mm / 25.4;
  yard = m / 0.9144;

  cout << feet << "feet, " << inch << "inch, " << yard << "yard.";
  return 0;
}