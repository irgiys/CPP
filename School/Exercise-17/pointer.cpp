#include <iostream>
using namespace std;

int main(){
  // Deklarasi
  int x = 8, y;
  int *xPtr;
  char *karakter;
  xPtr = &x;
  y = *xPtr;
  
  // Algoritma
  cout << "x : " << x << endl;
  cout << "alamat x : " << &x << endl;
  cout << "nilai xPtr : " << xPtr << endl; 
  cout << "alamat xPtr : " << &xPtr << endl; 
  cout << "nilai y : " << y << endl; 
  cout << "Nilai yang disimpan pada adalat y : " << xPtr << " = " << y << endl; 
  
  cout << endl;
  return 0;
}