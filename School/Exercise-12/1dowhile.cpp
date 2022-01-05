#include <iostream>
using namespace std;

int main(){
  int nomormenu;
  do{
    cout << "Menu Program" << endl;
    cout << "1. Input Data \t 4. Cetak Data " << endl;
    cout << "2. Hapus Data \t 5. Keluar Program" << endl;
    cout << "3. Ubah Data " << endl;
    cout << "Inputkan nomor menu = "; cin >> nomormenu;
    switch(nomormenu){
      case 1: cout << "Anda memilih nomor 1"; break;
      case 2: cout << "Anda memilih nomor 2"; break;
      case 3: cout << "Anda memilih nomor 3"; break;
      case 4: cout << "Anda memilih nomor 4"; break;
      case 5: cout << "Anda memilih nomor 5"; break;
      default: cout << "Nomor menu salah" << endl; break;
    }
  }while(nomormenu != 5);
  cout << endl;
  return 0;
}