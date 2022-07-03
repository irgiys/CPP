#include <iostream>
using namespace std;

int main(){
  int nilai[] = {2,123,234,13};
  int *ptrNilai;
  int i;
  ptrNilai= nilai;
  cout << "Ptr nilai : " << ptrNilai << endl;
  cout << "Alamat array nilai : " << nilai << endl;
  cout << "Nilai yang ada pada alamat " << ptrNilai << " adaalah " << *ptrNilai << endl;
  cout << "Elemen array index pertama : " << nilai[0] << endl;
  cout << "elemen array dengan array : " << endl;
  for (i = 0; i < 4; i++){
    cout << "ptr ke "<< i << " : " <<  ptrNilai[i] << endl;
  };
  cout << endl;
  return 0;
}