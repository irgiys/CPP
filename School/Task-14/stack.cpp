#include <iostream>
#include <conio.h>
#include <stdio.h>
#include <string>
#define MAX 5

using namespace std;

struct data{
  int top;
  struct mhs{
    string nama, JK,TL,jurusanSma, alamat;
  };
  mhs calon[MAX];
}d;
// Deklarasi fungsi
void init(), push(), pop(), show(), formPendaftaran();
bool isEmpty(); bool isFull();

int main(){
  int pilihan;
  init();
  do{
    system("cls");
    cout << endl
         << "=============================================" << endl
         << "Program Input Data Pendaftaran Mahasiswa Baru" << endl
         << "       STT. Wastukancana Purwakarta"<< endl
         << "=============================================" << endl
         << "          M E N U P I L I H A N"<< endl << endl;

    if (isFull()){
      cout << "Data Pendaftar penuh !!";
    }else{
      if(isEmpty()){
        cout << "Data Pendaftar masih kosong";
      }else{
        cout << "Data Pendaftar ada : " << d.top + 1;
      }
    }
    cout << endl << endl;
    cout << "1. Inputkan Data Calon Mahasiswa Baru" << endl
         << "2. Hapus Data Calon Mahasiswa Baru"<< endl
         << "3. Daftar Data Calon Mahasiswa Baru"<< endl
         << "4. Selesai"  << endl
         << "Pilihan  : ";
         cin >> pilihan;
    switch (pilihan){
      case 1: 
        push();
        break;
      case 2:
        pop(); getch(); 
        break;
      case 3:
        show(); getch();
        break;
      case 4: cout << "Terimakasih ! ! !"  << endl;
        break;
      default:
        break;
    }
  } while (pilihan != 4);
  cout << endl;
  return 0;
}
void init(){
  d.top = -1;
}
bool isEmpty(){
  return d.top == -1; 
}
bool isFull(){
  return d.top == MAX - 1;
}
void push(){
  if(isFull()){
    cout << "Maaf pendaftar sudah penuh " << endl;
  }else{
    d.top++;
    formPendaftaran(); 
  }
}
void pop(){
  if (isEmpty()){
    cout << endl << "Pendaftar masih kosong" << endl;
  }else{
    cout << endl << "Data " << d.calon[d.top].nama << " Berhasil dihapus" << endl;
    d.top--;
  }
  
}
void formPendaftaran(){
    int JK, jurusan;
    cout << endl << "Gelombang : I " << endl
         << "Tahun daftar : 22" << endl
         << "No urut : " << d.top << endl;
    cout << "Nama lengkap : ";
    cin.ignore();
    getline(cin, d.calon[d.top].nama);
    cout << endl 
         <<"Jenis Kelamin : 1. Laki-laki" << endl
         <<"                2. Perempuan" << endl
         <<"Pilih : ";
    cin >> JK;
    d.calon[d.top].JK = JK == 1 ? "Laki-laki" : "Perempuan";
    cout << "Tempat Lahir : "; 
    cin >> d.calon[d.top].TL;
    cout << "Jurusan di SMA : 1. IPA" << endl
         << "                 2. IPS" << endl
         << "                 3. Bahasa" << endl
         << "                 4. Lain-lain" << endl
         << "Pilih : ";
    cin >> jurusan;
    d.calon[d.top].jurusanSma = jurusan == 1 ? "IPA" : 
                                jurusan == 2 ? "IPS" :
                                jurusan == 3 ? "Bahasa" :
                                "Lain-lain";
    cout << "Alamat : ";
    getline(cin, d.calon[d.top].alamat);
}
void show(){
  int no;
  if (isEmpty()){
    cout << endl << "Pendaftar masih kosong" << endl;
  } else {
    cout << endl << "Data Pendaftar : " << endl; 
    for (int i = d.top; i >= 0; i--){
      cout << i+1 << ". " << d.calon[i].nama << endl;
    }
  }
}