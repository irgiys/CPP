#include <iostream>
using namespace std;

int main(){
  int n, a;
  cout << "Inputkan berapa mau di faktorial : "; cin >> a;
  n = a;
  while(a > 1){
    a = a - 1;
    n = n * a;
  }
  cout << n;
  // return n;
}