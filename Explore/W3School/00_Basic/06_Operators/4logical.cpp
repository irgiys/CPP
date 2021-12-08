#include <iostream>

using namespace std;
int main(){
  int x = 3;

  cout << endl << (x < 5 && x < 10);
  cout << endl << (x < 4 || x < 5);
  cout << endl << !(x < 5 && x < 10);

  return 0;
}