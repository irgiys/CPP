#include <iostream>

using namespace std;

int main()
{
  int distance, km, m, cm, remainDistance;

  cout << "Input the distance : "; cin >> distance;
  km = distance / 100000;
  remainDistance = distance % 100000;

  m = remainDistance / 100;
  remainDistance = remainDistance % 100;
  
  cm = remainDistance;

  cout << endl << km << " km, " << m << " m, " << cm << " cm, ";
  
  return 0;

}