#include <iostream>

using namespace std;
int main()
{
  float cash;
  cout << "Masukan total pembelian : RP."; cin >> cash;
  cout << endl;  

  if (cash < 10000){
    cout << "Diskon 0\% harga beli : RP." << cash;
  } else if (cash < 50000){
    cout << "Besar diskon 10\% : RP." << (cash * 0.10) << endl; 
    cout << "Harga setelah diskon : RP." << cash - (cash * 0.10);
  } else if (cash <= 100000){
    cout << "Besar diskon 15\% : RP." << (cash * 0.15) << endl; 
    cout << "Harga setelah diskon : RP." << cash - (cash * 0.15);
  } else if (cash > 100000){
    cout << "Besar diskon 20\% : RP." << (cash * 0.20) << endl; 
    cout << "Harga setelah diskon : RP." << cash - (cash * 0.20);
  }
  return 0;
}