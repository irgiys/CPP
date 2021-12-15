#include <iostream>
#include <string>
using namespace std;

int main(){
  int num;
  string prov, ibkot;
  cout << "=====================";
  cout << endl << "Daftar ibukota di pulau Jawa = ";
  cout << endl << "[1] Serang\t"  << "[4] Semarang";
  cout << endl << "[2] Jakarta\t" << "[5] Yogyakarta" ;
  cout << endl << "[3] Bandung\t" << "[6] Surabaya";
  cout << endl << "Inputkan nomor ibu kota = "; cin >> num;
  switch (num)
  {
  case 1: ibkot = "Serang"; prov = "Banten";
    break;
  case 2: ibkot = "Jakarta"; prov = "DKI Jakarta";
    break;
  case 3: ibkot = "Bandung"; prov = "Jawa Barat";
    break;
  case 4: ibkot = "Semarang"; prov = "Jawa Tengah";
    break;
  case 5: ibkot = "Yogyakarta"; prov = "DI Yogyakarta";
    break;
  case 6: ibkot = "Surabaya"; prov = "Jawa Timur";
    break;
  default: ibkot = "Ups";  
    break;
  }
  if (ibkot == "Ups") cout << endl << "Maaf nomor tidak tersedia";
  else cout << endl << "Ibu kota " << ibkot << " Provinsinya " << prov;
       cout << endl << "=====================" << endl; 
  return 0;
}