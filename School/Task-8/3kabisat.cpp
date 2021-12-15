#include <iostream>
using namespace std;

int main(){
  int bulan, tahun;
  cout << "========================" << endl << "Menentukan bulan kabisat";
  cout << endl << "Masukan Bulan = "; cin >> bulan;
  cout << endl << "Masukan Tahun = "; cin >> tahun;
  switch (bulan)
  {
  case 1: case 3: case 5: case 7: case 8: case 10: case 12:
    cout << "31 Hari";
    break;
  case 4: case 6: case 9: case 11:
    cout << "29 Hari";
    break;
  case 2:
    if (tahun % 100 == 0 && tahun % 400 == 0) cout << "28 Hari";
    else cout << "29 Hari";
    break;
  default:
    cout << "Maaf inputan salah";
    break;
  }
  cout << endl;
  cout << "========================" << endl;
  return 0;
}