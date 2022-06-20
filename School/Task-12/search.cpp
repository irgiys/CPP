#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int arrayInt[NMAKS];
void bacaArray(arrayInt A, int n);
void seqSearch1(arrayInt A, int n, int x, bool *ketemu );

int main(){
  // DEKLARASI
  arrayInt A;
  int n, x;
  bool found;
  // ALGORITMA
  cout << "Inputkan banyaknya n : ";
  cin >> n;
  bacaArray(A,n);
  cout << "Inputkan nilai yang dicari : ";
  cin >> x;
  seqSearch1(A,n,x,&found);
  if (!found){
    cout << "Tidak ditemukan";
    cout << endl;
    return 0;
  }
  cout << "Ditemukan";
  cout << endl;
  return 0;
}

void bacaArray(arrayInt A, int n){
  // DEKLARASI
  int i;
  // ALGORITMA
  for (i = 0; i < n; i++){
    cout << "Inputkan nilai elemen A["<<i<<"] : "; 
    cin >> A[i];
  };
}
void seqSearch1(arrayInt A, int n, int x, bool *ketemu){
  // DEKLARASI
  int i = 0;
  while (i < n && A[i] != x ) i++; 
  A[i] == x ? *ketemu = true : *ketemu = false;
}
