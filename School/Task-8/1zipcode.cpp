#include <iostream>
#include <string>
using namespace std;

int main(){
  string kota;
  int num, kodePos;
  char yes;
  bool lagi = true;
  while(lagi){
    cout << endl << "Inputkan nomor kota " << endl << "[1]Padang, [2]Bandung, [3]Solo, [4]Denpasar, [5]Palu : ";
    cin >> num;
    switch (num)
    {
      case 1:
        kota = "Padang";
        kodePos = 25000;
        break;
      case 2:
        kota = "Bandung";
        kodePos = 40100;
        break;
      case 3:
        kota = "Solo";
        kodePos = 51000;
        break;
      case 4:
        kota = "Denpasar";
        kodePos = 72000;
        break;
      case 5:
        kota = "Palu";
        kodePos = 93200;
        break;
      default:
        kodePos = 0;
        break;
    }
    if(kodePos == 0) cout << "Masukan nomor yang tersedia !" << endl;
    else cout << "Kota " << kota << " Kode posnya : " << kodePos << endl;

    cout << "Lagi ? (y/n) : "; cin >> yes;
    yes == 'y' ? lagi : lagi = false;
  }
  return 0;
}