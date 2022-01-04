#include <iostream>
using namespace std;

int main(){
  char letter;
  int length;
  length = 0;
  cout << "Inputkan karakter = "; cin >> letter;
  while(letter != '.'){
    cout << "Inputkan karakter = "; cin >> letter;
    length += 1;
  }
  cout << "Panjang karakter = " << length;
  cout << endl;
  return 0;
}