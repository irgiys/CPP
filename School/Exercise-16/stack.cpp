#include <iostream>
#include <conio.h>
#include <stdio.h>
#define MAX 5

using namespace std;
struct Stack{
  int top, data[MAX];
}S;
void init(){
  S.top = -1;
}
bool isEmpty(){
  return S.top == -1;
}
bool isFull(){
  return S.top == MAX  - 1;
}
void push(){
  if(isFull()){
    cout << endl << "Stack penuh" << endl;
  } else {
    S.top++;
    cout << endl << "Masukkan data = "; cin >> S.data[S.top];
    cout << "Data " << S.data[S.top] << " Masuk ke stack" << endl;
  }
}
void pop(){
  if(isEmpty()){
    cout << endl << "Stack kosong" << endl;
  }else{
    cout << endl << "Data " << S.data[S.top] << " Dihapus dari stack" << endl;
    S.top--; 
  }
}
void printStack(){
  if(isEmpty()){
    cout << endl << "Tumpukan kosong" << endl;
  } else {
    cout << endl << "Stack : ";
    for (int i = S.top; i >= 0; i--){
      cout << S.data[i] << ((i == 0) ? "" : ",");
    }
  }
}

int main(){
  int pilihan;
  init();
  do{
    system("cls");
    printStack();
    cout << endl << "1. Input (Push)" << endl
         << "2. Hapus (Pop)" << endl
         << "3. Keluar " << endl
         << "Pilihan : ";
    cin >> pilihan;
    switch (pilihan){
    case 1:
      push();
      getch();
      break;
    case 2:
      pop();
      getch();
      break;
    case 3: cout << "OKay" << endl;
      getch();
      break; 
    default: cout << "Pilihan tidak tersedia" << endl;
      getch();
      break;
    }
  } while(pilihan != 3);

  cout << endl;
  return 0;
}