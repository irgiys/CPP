#include <iostream>
using namespace std;

int main(){
  int a;
  cout << "Input a : "; cin >> a;
  switch (a)
  {
  case 3: a = a + 3;  break;
  case 1: a++; break;
  case 2:
  case 4: a = a-1; break;
  }
  cout << a;
  cout << endl;
  return 0;
}