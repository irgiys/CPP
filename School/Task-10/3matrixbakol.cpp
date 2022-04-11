// No 3 Menjumlahkan kolom dan baris
#include <iostream>
using namespace std;

void matrikTamel(int baris, int kolom)
{
  int A[baris][kolom];
  int i, j, Nkolom = 0, Nbaris = 0;

  for (i = 0; i < baris; i++){
    for (j = 0; j < kolom; j++){
      cout << "Masukan nilai matrik A["<<i<<"]"<<"["<<j<<"] : ";
      cin >> A[i][j];
    }
  }
  cout << endl << "Matrik :" << endl;

  for (i = 0; i < baris; i++){
    for (j = 0; j < kolom; j++){
      cout << "|\t" <<A[i][j] << "\t|";
      Nkolom += A[i][j];
    }
    cout << " " << Nkolom << " ";
    cout << endl;
    Nkolom = 0;
  }

  for (j = 0; j < kolom; j++){
    Nbaris = 0;
    for (i = 0; i < baris; i++){
        Nbaris += A[i][j];
    }
    cout << "\t" << Nbaris << "\t";
  }
}

int main()
{
  int baris, kolom;
  cout << "Masukan baris matrik : ";
  cin >> baris;
  cout << "Masukan kolom matrik : ";
  cin >> kolom;
  matrikTamel(baris,kolom);
  cout << endl;
  return 0;
}