#include <iostream>
#include <string>
using namespace std;

typedef struct {
  string NIP;
  string nama;
  string alamat[3];
  string jabatan;
  string agama;
  string tanggalLahir;
  string tanggalMulaiKerja;
  string unitKerja;
} BIODATA;

typedef struct {
  string jalan;
  string kodePos;
  string kota;
} TINGGAL;

typedef struct {
  string tanggal;
  string bulan;
  string tahun;
} TANGGAL;

void cariTanggal(TANGGAL *TL, TANGGAL *TMK){
  cout << "Inputkan Tanggal Lahir";
  cout << endl << "Tanggal\t: ";
  cin >> TL->tanggal;
  cout << "Bulan \t: ";
  cin >> TL->bulan;
  cout << "Tahun \t: ";
  cin >> TL->tahun;
  
  cout << endl << "Inputkan Tanggal Masuk Kerja";
  cout << endl << "Tanggal\t: ";
  cin >> TMK->tanggal;
  cout << "Bulan \t: ";
  cin >> TMK->bulan;
  cout << "Tahun \t: ";
  cin >> TMK->tahun;
};

int main() {
  BIODATA BIO;
  TINGGAL ALMT;
  TANGGAL TL, TMK;
  cout << "=================PROGRAM BIODATA PEGAWAI=================" << endl;
  cout << endl << "Inputkan NIP Pegawai\t: ";
  cin >> BIO.NIP;
  // cin clear
  cin.ignore();
  cout << "Inputkan Nama\t\t: ";
  getline(cin, BIO.nama);
  cout << endl << "Inputkan Alamat";
  cout << endl << "Jalan\t\t\t: ";
  getline(cin, ALMT.jalan);
  cout << "Kode POS\t\t: ";
  cin >> ALMT.kodePos;
  cout << "Kota\t\t\t: ";
  cin >> ALMT.kota;

  cout << endl << "Inputkan Agama\t\t: ";
  cin >> BIO.agama; 
  cin.ignore();
  cout << "Inputkan Jabatan\t: ";
  getline(cin, BIO.jabatan);
  cout << "Inputkan Unit Kerja\t: ";
  getline(cin, BIO.unitKerja);
  cout << endl;

  cariTanggal(&TL, &TMK);
  BIO.alamat[0] = ALMT.jalan;
  BIO.alamat[1] = ALMT.kodePos;
  BIO.alamat[2] = ALMT.kota; 

  cout << endl << "-------------------------------------";
  cout << endl << "===========BIODATA PEGAWAI===========";
  cout << endl << "-------------------------------------";
  cout << endl << "|                      | ";
  cout << endl << "| NIP                  | " << BIO.NIP;
  cout << endl << "| Nama                 | " << BIO.nama;
  cout << endl << "| Tanggal Lahir        | " << TL.tanggal << "-" << TL.bulan << "-" << TL.tahun; 
  cout << endl << "| Alamat                 ";
  cout << endl << "|   Jalan              | " << BIO.alamat[0];
  cout << endl << "|   Kode Pos           | " << BIO.alamat[1];
  cout << endl << "|   Kota               | " << BIO.alamat[2];
  cout << endl << "| Agama                | " << BIO.agama;
  cout << endl << "| Jabatan              | " << BIO.jabatan;
  cout << endl << "| Unit Kerja           | " << BIO.unitKerja;
  cout << endl << "| Tanggal Mulai Kerja  | " << TMK.tanggal << "-" << TMK.bulan << "-" << TMK.tahun;
  
  cout << endl;
  return 0;
}