#include <iostream>
using namespace std;

int Calc(int x, int y, char op){
  switch (op)
  {
  case '*':
    return x * y;
  case '+':
    return x + y;
  case '-':
    return x - y;
  case '/':
    return x / y;
  default:
    cout << "Masukan operan atau operator dengan benar";
    break;
  }
  return 0;
}
int main(){
  int operand1;
  int operand2;
  char op;
  cout << "Masukan angka ke 1 = "; cin >> operand1;
  cout << "Masukan angka ke 2 = "; cin >> operand2;
  cout << "Masukan operator"<< endl << "[*]Kali, [/]Bagi, [+]Tambah, [-]Kurang = ";
  cin >> op;
  cout << endl << "Hasil dari operasi diatas adalah = " << Calc(operand1, operand2, op);
  cout << endl;
  return 0;
}