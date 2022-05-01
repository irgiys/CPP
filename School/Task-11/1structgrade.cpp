#include <iostream>
#include <string>
using namespace std;

typedef struct {
  int nim;
  int tugas;
  int kuis;
  int uts;
  int uas;
  float nilaiAkhir;
  char nilaiHuruf;
  string nama;
} MAHASISWA;

int main()  {
  MAHASISWA M;
  cout << "Inpukan nama mahasiswa : ";
  getline(cin, M.nama);
  cout << "Inputkan NIM mahasiswa : ";
  cin >> M.nim;
  cout << "Inputkan nilai tugas   : ";
  cin >> M.tugas;
  cout << "Inputkan nilai kuis    : ";
  cin >> M.kuis;
  cout << "Inputkan nilai UTS     : ";
  cin >> M.uts;
  cout << "Inputkan nilai UAS     : ";
  cin >> M.uas;

  M.nilaiAkhir = (0.1 * M.tugas) + (0.2 * M.kuis) + (0.3 * M.uts) + (0.4 * M.uas);
  M.nilaiHuruf = M.nilaiAkhir > 85 && M.nilaiAkhir <= 100 ? 'A' : 
                    M.nilaiAkhir > 70 && M.nilaiAkhir <= 85 ? 'B' :
                        M.nilaiAkhir > 55 && M.nilaiAkhir <= 70 ? 'C' :
                            M.nilaiAkhir > 40 && M.nilaiAkhir <= 55 ? 'D' : 'E';

  cout << endl << "Nilai akhir  = " << M.nilaiAkhir;
  cout << endl << "Grade        = " << M.nilaiHuruf;
  cout << endl;
  return 0;
}