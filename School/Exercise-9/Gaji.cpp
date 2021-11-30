#include <iostream>
#include <string>

using namespace std;
int main()
{
  string nama;
  int jjk, upahTotal, lembur;
  
  cout << "Input nama : "; getline(cin, nama);
  cout << endl << "Input Jumlah jam kerja : "; cin >> jjk; 

  if (jjk < 48) {
    upahTotal = jjk * 2000;
  } else {
    lembur = jjk - 48;
    upahTotal = (48 *  2000) + (lembur * 3000);
    cout << endl << "Lembur : " << lembur;
  }
  cout << endl << "\t===================";
  cout << endl << "Nama : " << nama;
  cout << endl << "Jumlah upah kerja : " << upahTotal << endl;

  return 0;
}