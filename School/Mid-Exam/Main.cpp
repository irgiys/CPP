#include <iostream>

using namespace std;
int main()
{
  struct Mahasiswa
  {
    int nim, uangPembangunan, cicilan, uangKemahasiswaan, totalBiaya;
    char nama[30], prodi[30];
  };
  Mahasiswa mhs1;
  
  cout << endl << "Masukan Nama Mahasiswa : "; cin.getline(mhs1.nama, sizeof(mhs1.nama));
  cout << endl << "Masukan Prodi Mahasiswa : "; cin.getline(mhs1.prodi, sizeof(mhs1.prodi));
  cout << endl << "Masukan Nim Mahasiswa : "; cin >> mhs1.nim;
  cout << endl << "Masukan uang pembangunan : "; cin >> mhs1.uangPembangunan;
  cout << endl << "Masukan cicilan pertama : "; cin >> mhs1.cicilan;
  cout << endl << "Masukan uang kemahasiswaan : "; cin >>  mhs1.uangKemahasiswaan;

  mhs1.totalBiaya = mhs1.uangKemahasiswaan + mhs1.cicilan + mhs1.uangPembangunan;
  cout << endl  << "==================================";
  cout << endl << "Nama Mahasiswa : " << mhs1.nama;
  cout << endl << "Nim Mahasiswa : " << mhs1.nim;
  cout << endl << "Prodi Mahsiswa : " << mhs1.prodi;
  cout << endl << "Total biaya yang telah dibayar : " << mhs1.totalBiaya; 
  
  return 0;   
}