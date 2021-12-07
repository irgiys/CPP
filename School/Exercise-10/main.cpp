#include <iostream>

using namespace std;
int main(){
  int nomorBulan;
  cout << "Input Nomor Bulan : "; cin >> nomorBulan;
  switch (nomorBulan)
  {
  case 1: cout << endl << "Januari";
  break;
  case 2: cout << endl << "Februari";
  break;
  case 3: cout << endl << "Maret";
  break;
  case 4: cout << endl << "April";
  break;
  case 5: cout << endl << "Mei";
  break;
  case 6: cout << endl << "Juni";
  break;
  case 7:cout << endl << "Juli";
  break;
  case 8: cout << endl << "Agustus";
  break;
  case 9: cout << endl << "September";
  break;
  case 10: cout << endl << "Oktober";
  break;
  case 11: cout << endl << "November";
  break;
  case 12: cout << endl << "Desember";
  break;
  default: cout << endl << "Nomor Bulan invalid";
    break;
  }
  return 0;
}