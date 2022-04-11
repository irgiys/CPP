// No 2 Elemen terbesar matrik
#include <iostream>
using namespace std;

void buatCariMax(int Nbaris, int Nkolom){
  int A[Nbaris][Nkolom];
  int max = 0;
  for (int q = 0; q < 2; q++){
    for (int i = 0; i < Nbaris; i++){
      for (int j = 0; j < Nkolom; j++){
        if(q == 0){
          cout << "Masukan Matrik elemen A["<<i<<"]"<<"["<<j<<"] : ";
          cin >> A[i][j];
        }
        if(q == 1){
          if (max < A[i][j]){
            max = A[i][j];
          }
          i == 0 && j == 0 && cout << endl << "Matrik A = " << endl;
          cout << "|\t" << A[i][j] << "\t|";
          j + 1 == Nkolom && cout << endl;
        }
      }
    }
  }
  cout << endl << "Elemen max dari Matrik A = " << max;  
}
int main(){
  int baris, kolom;
  cout << "Masukan berapa banyak baris : ";
  cin >> baris;
  cout << "Masukan berapa banyak kolom : ";
  cin >> kolom;
  buatCariMax(baris, kolom);
  cout << endl;
  return 0;
}