#include <iostream>
#include <string>

using namespace std;
int main()
{
  string firstName, fullName;
  // use getline allows adding whitespace / space
  cout << endl << "Input your first name : "; 
  getline(cin, firstName);
  
  cout << endl << "Input your full name : "; 
  getline(cin, fullName);

  cout << endl << "first name : " << firstName;
  cout << endl << "full name : " << fullName;
}