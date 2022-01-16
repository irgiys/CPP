#include <iostream>
using namespace std;

int main(){
  int z, x;
  z = 1;
  x = 100;
  while(z < 100){
    x = x - 1;
    z = z + 1;
  }
  cout << "x: " << x << endl;
  cout << "z: " << z;
  cout << endl;
  return 0;
}