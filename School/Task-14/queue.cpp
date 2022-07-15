#include <iostream>
#include <conio.h>
#include <stdlib.h>
#define MAX 1000
using namespace std;

int nomer[MAX], head = -1, tail = -1;
void view(), antrianMasuk(int no), antrianKeluar(), clear();
bool isEmpty(), isFull();

int main(){
    int choose, p=1, urut; //deklarasi untuk pilihan user dan nomer urut antrian
    do{
        system("cls");
        cout << endl <<  endl << "===== PROGRAM ANTRIAN C++ ====="
             << endl << "==============================="
             << endl << "|1. Tambah Antrian            |"
             << endl << "|2. Panggil Antrian           |"
             << endl << "|3. Lihat daftar antrian      |"
             << endl << "|4. Format                    |"
             << endl << "|5. Exit                      |"
             << endl << "===============================";
        cout << endl << "Choose ! "; cin >> choose;
        cout << endl << endl;
        if(choose == 1){
            if(isFull()) {
                cout<<"Antrian sudah penuh, mohon tunggu beberapa saat lagi ";
            }
            else{
                urut=p;
                antrianMasuk(urut);
                cout << "---------------------------------" << endl;
                cout << "|          NO. ANTRIAN          |" << endl;
                cout << "|               " << p << "              ||" << endl;
                cout << "---------------------------------" << endl;
                cout << "|       Silahkan Mengantri      |" << endl;
                cout << "|      Menunggu " << tail << " Antrian      ||" << endl;
                cout << "---------------------------------" << endl;
                p++;
            }
        }
        else if(choose == 2){
            cout << "=================================" << endl;
            cout << "No. Antri : [" << nomer[head] << "]";
            cout << endl << "=================================" << endl;
            antrianKeluar();
            cout << "Silahkan Dipanggil !" << endl;
        }
        else if(choose == 3){
            view();
        }
        else if(choose == 4){
            clear();
            cout<<"Antrian dikosongkan ! ";
        }
        else if(choose == 5){
          cout << endl << "Terimakasih !";
        }
        else{
            cout << "Masukan anda salah !" << endl << endl;
        }
        getch();
    }while(choose!=5);
    return 0;
}

bool isEmpty(){
  return tail == -1;
}
bool isFull(){
  return tail == MAX - 1;
}
void antrianMasuk(int no){
  if(isEmpty()){
    head = tail = 0;
  } else {
    tail++;
  }
  nomer[tail] = no;
}
void antrianKeluar(){
  if (isEmpty()){
    cout << "Antrian sudah kosong ! ";
    getch(); 
  }else{
    for (int i = head; i < tail; i++){
      nomer[i] = nomer[i+1];
    }
    tail--;
    if (tail == -1){
      head = -1;
    }    
  }
}
void clear(){
  head = tail = -1;
}
void view(){
  if (isEmpty()){
    cout << "Antrian kosong ! ";
  } else {
    system("cls");
    for (int i = head; i <= tail; i++){
      cout << "==============================" << endl
           << " No. Antrian : [" << nomer[i] << "]" << endl
           << "==============================" << endl; 
    }
  }
}
