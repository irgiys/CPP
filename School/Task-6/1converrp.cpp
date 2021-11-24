#include <iostream>

using namespace std;
int main()
{
  // deklarasi
  struct uang
  {
  int uang, seribu, seratus, u50, u25, cek;
  };
  uang uang1;
  
  
  // int uang, seribu, seratus, u50, u25, cek;
  cout << endl << "Inputkan uang : "; cin >> uang1.uang;

  uang1.cek = uang1.uang % 25;
  if(uang1.cek == 0){
    uang1.seribu = uang1.uang / 1000;
    uang1.uang = uang1.uang % 1000;
    uang1.seratus = uang1.uang / 100;
    uang1.uang = uang1.uang % 100;
    uang1.u50 = uang1.uang / 50;
    uang1.uang = uang1.uang % 50;
    uang1.u25 = uang1.uang / 25;
    uang1.uang = uang1.uang % 25;

    cout << endl << "Seribu : "   << uang1.seribu;
    cout << endl << "Seratus : "  << uang1.seratus;
    cout << endl << "Uang 50 : "  << uang1.u50;
    cout << endl << "Uang 25 : " << uang1.u25;
  }else{
    cout << endl << "Bukan kelipatan 25";
  }
  return 0;
}