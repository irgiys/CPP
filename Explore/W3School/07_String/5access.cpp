#include <iostream>
#include <string>

using namespace std;
int main()
{
  string myString = "Apoilo";

  cout << endl << "String index 0: "<< myString[0];

  cout << endl << myString;  
  myString[2] = 'e';
  cout << endl << myString;

  return 0;
}