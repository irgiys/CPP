#include <iostream>
#include <typeinfo>

using namespace std;
int main()
{
  char initial = 'I';
  char charara = 'P';

  cout << initial;
  char yourname[40] = "ada da";
  // Alternative using ASCII values to display character
  char a = 65, b = 56, c = 75;
  


  // cout << endl << "Input your name : " ; cin.getline(yourname, sizeof(yourname));
  cout << endl << a << endl << b << endl << c ; 
  cout << endl << "your name : " << yourname;
  cout << endl << "====================";
  cout << endl << typeid(initial).name();
  cout << endl << typeid(charara).name();
  cout << endl << typeid(yourname).name(); 
  return 0;
}