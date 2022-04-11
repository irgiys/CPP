#include <iostream>
using namespace std;

const int baris = 3;
const int kolom = 3;
int main(){
  int A[baris][kolom], B[baris][kolom], C[baris][kolom];
  int q, i ,j;
  for (q = 0; q < 5; q++){
    for (i = 0; i < baris; i++){
      for (j = 0; j < kolom; j++){
        switch (q){
        case 0:
          cout << "Masukan elemen Matrik A["<<i<<"]"<<"["<<j<<"] : ";
          cin >> A[i][j];
          j + 1 == baris && i + 1 == baris && cout << endl;
          break;
        case 1:
          cout << "Masukan elemen Matrik B["<<i<<"]"<<"["<<j<<"] : ";
          cin >> B[i][j];
          j + 1 == baris && i + 1 == baris && cout << endl;
          break;
        case 2:
          C[i][j] = A[i][j] - B[i][j];
          break;
        case 3:
          i == 0 && j == 0 && cout << "Matrik A = " << endl;
          cout << "|\t" << A[i][j] << "\t|";
          j + 1 == baris && cout << endl;
        break;
        case 4:
          i == 0 && j == 0 && cout << "Matrik B = " << endl;
          cout << "|\t" << B[i][j] << "\t|";
          j + 1 == baris && cout << endl;
          break;
        default:
          i == 0 && j == 0 && cout << "Matrik C = " << endl;
          cout << "|\t" << C[i][j] << "\t|";
          j + 1 == baris && cout << endl;
          break;
        }
      }
    }
  }
  cout << endl;
  return 0;
}
