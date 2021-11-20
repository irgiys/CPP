#include <iostream>

using namespace std;
int main()
{
  char initial = 'I';
  cout << initial;
  char yourname[40];
  // Alternative using ASCII values to display character
  char a = 65, b = 56, c = 75;


  cout << endl << "Input your name : " ; cin.getline(yourname, sizeof(yourname));
  cout << endl << a << endl << b << endl << c ; 
  cout << endl << "your name : " << yourname;
  return 0;
}