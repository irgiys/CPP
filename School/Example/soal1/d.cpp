#include <iostream>
using namespace std;

int main(){
  int p = 2;
  int x;
  for (x=1; x <= 4; x++)
  {
    cout << p << " ";
    p = (2*p)+2;
  }
  cout << p << " " << endl;
  cout << endl;
  return 0;
}