#include <iostream>

using namespace std;
int main()
{
  int upah, jam, upahTotal;
  char nama[45], golongan;
  cout << "Masukan nama : "; cin.getline(nama, sizeof(nama));
  cout << endl << "Masukan jumlah jam kerja : "; cin >> jam;
  cout << endl << "Masukan Golongan (A|B|C|D) : "; cin >> golongan;
  switch (golongan) {
    case 'A': case 'a': upah = 4000;
      break;
    case 'B': case 'b': upah = 5000;
      break;
    case 'C': case 'c' : upah = 6000;
      break;
    case 'D': case 'd' : upah = 7500;
      break;
    default : upah = 0; cout << "Salah golongan" << endl;
      break;
  }
  if(upah > 1000){
    if(jam < 48){
      cout << endl << "Upah karyawan : " << upah * jam; 
      cout << endl;
    }else{
      cout << endl << "Upah karyawan : " << ((jam - 48) * 3000) + jam * upah; 
      cout << endl;
    }
  }
  return 0;
}