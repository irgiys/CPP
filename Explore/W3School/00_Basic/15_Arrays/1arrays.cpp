#include <iostream>
#include <string>

using namespace std;
int main()
{
  int nim[3] = {12,13,41};
  string cars[4] = {"BMW", "Tesla", "Toyota", "Ford"};
  
  cars[2] = "Opel";
  cout << cars[0];
  cout << endl << cars[2];
  cout << endl << nim[2];

  return 0;
}