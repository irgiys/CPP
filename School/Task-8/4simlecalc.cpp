#include <iostream>
using namespace std;

int main(){
  float bil1, bil2;
  char op;

  cout << "=====================";
  cout << endl << "Inputkan bilangan 1 = "; cin >> bil1;
  cout << endl << "Inputkan bilangan 2 = "; cin >> bil2;
  cout << endl << "Inputkan operasi aritmatikanya = ";
  cout << endl << "[+] Penjumlahan";
  cout << endl << "[-] Pengurangan";
  cout << endl << "[*] Perkalian";
  cout << endl << "[/] Pembagian";
  cout << endl << " = "; cin >> op;
  cout << endl;
  switch (op)
  {
  case '+': cout << "Hasil Penjumlahannya adalah = " << bil1 + bil2; 
    break;
  case '-': cout << "Hasil Pengurangannya adalah = " << bil1 - bil2;
    break;
  case '*': cout << "Hasil Perkaliannya adalah = " << bil1 * bil2;
    break;
  case '/': cout << "Hasil Pembagiannya adalah = " << bil1 / bil2;
    break;
  default:
    cout << "Maaf inputan salah";
    break;
  }
  cout << endl << "=====================" <<  endl;
  return 0;
}