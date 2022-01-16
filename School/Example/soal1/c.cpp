#include <iostream>
using namespace std;

int main(){
  int angka = 0;
  int x;
  for(x=1;x<=5;x++){
    angka = angka + (2*x);
    cout << angka << " ";
  }
  cout << endl;
  return 0;
}