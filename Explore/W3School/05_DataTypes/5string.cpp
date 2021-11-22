#include <iostream>
// To use string, you must include additional header file in the source code, the <string> library:
#include <string>

using namespace std;
int main()
{
  string thisString = "This is string yreah 1 21 3104 ", yesString, yourName;
  yesString = "ye sir";

  cout << endl << "input your name = ";
  getline(cin, yourName);
  cout <<"your name = " << yourName << endl << thisString << endl << yesString;

  return 0;
}
