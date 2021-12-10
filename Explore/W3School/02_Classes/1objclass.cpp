#include <iostream>
#include <string>
using namespace std;

class Myclass { // The class name
  public :  // access specifier 
    int myNum;  // attribute (int variable)
    string myString; // attribute (string variable)
};
int main()
{
  Myclass myObj;
  myObj.myNum = 14;
  myObj.myString = "Diavlo";
  
  cout << myObj.myNum << endl;
  cout << myObj.myString << endl;

  return 0;
}