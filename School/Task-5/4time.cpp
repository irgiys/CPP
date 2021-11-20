#include <iostream>

using namespace std;
int main()
{
    struct Jam
  {
    int hh, mm, ss;
  };
  Jam jam;
  cout << "Masukan Jam : "; cin >> jam.hh;
  cout << endl << "Masukan Menit : ";  cin >> jam.mm;
  cout << endl << "Masukan detik : "; cin >> jam.ss;

  cout << endl << "Sebelum  : " << jam.hh << ":" << jam.mm << ":" << jam.ss;

  if(jam.ss < 59){
    jam.ss = jam.ss + 1;
  }else{
    jam.ss = 0;
    if(jam.mm < 59){
      jam.mm = jam.mm + 1;
    }else{
      jam.mm = 0;
      if(jam.hh < 24){
        jam.hh = jam.hh + 1;
      }else{
        jam.hh = 0;
        jam.ss = jam.ss + 1;
      }
    }
  }
  cout << endl << "Sesudah : " << jam.hh << ":" << jam.mm << ":" << jam.ss;
  
  return 0;
 }