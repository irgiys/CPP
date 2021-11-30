#include <iostream>

using namespace std;
int main()
{
  int hours;
  cout << endl << "Input the time in hours : "; cin >> hours;

  // you can put else if as much as you want 
  
  if (hours < 10){
    cout << endl << "Good morning !";
  } else if (hours < 20){
    cout << endl << "Good day !";
  } else {
    cout << endl << "Good evening !";
  }

  return 0;
}