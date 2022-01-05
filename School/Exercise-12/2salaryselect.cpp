#include <iostream>
#include <string>
using namespace std;
int main()
{
  int upah, jam, upahTotal;
  string nama;
  char golongan, jawab;
  do{
  cout << "=============================" << endl;
  cout << "Masukan nama : "; cin >> nama;
  cout << endl << "Masukan jumlah jam kerja : "; cin >> jam;
  cout << endl << "Masukan Golongan (A|B|C|D) : "; cin >> golongan;
  switch (golongan) {
    case 'A': case 'a': upah = 4000; break;
    case 'B': case 'b': upah = 5000; break;
    case 'C': case 'c': upah = 6000; break;
    case 'D': case 'd': upah = 7500; break;
    default : upah = 0; cout << "Salah golongan" << endl; break;
  }
  if(upah > 1000){
    if(jam < 48){
      upahTotal =  upah * jam;
    }else{
      upahTotal = ((jam - 48) * 3000) + jam * upah;
    }
  }
  cout << endl << "Nama karyawan = " << nama << endl;
  cout << "Golongan = " << golongan << endl;
  cout << "Upah total = " << upahTotal << endl;
  cout << endl << "Ulangi untuk karyawan lain ? (y/t) "; cin >> jawab;
  cout << "=============================" << endl;
 }while(jawab != 't');
  return 0;
}