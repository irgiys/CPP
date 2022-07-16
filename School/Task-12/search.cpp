#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int arrayInt[NMAKS];
void bacaArray(arrayInt A, int n);
void seqSearch1(arrayInt A, int n, int x, bool *ketemu );
void binarySearch1(arrayInt A, int n, int x, int *idx);
int main(){
  // DEKLARASI
  arrayInt A;
  int n, x, idx;
  bool found;
  // ALGORITMA
  cout << "Inputkan banyaknya n : ";
  cin >> n;
  bacaArray(A,n);
  cout << "Inputkan nilai yang dicari : ";
  cin >> x;
  binarySearch1(A,n,x,&idx);
  // seqSearch1(A,n,x,&found);
  // if (!found){
  //   cout << "Tidak ditemukan";
  //   cout << endl;
  //   return 0;
  // }
  cout << (idx == -1 ? "tidak Ditemukan" : "ditemukan");
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

void binarySearch1(arrayInt A, int n, int x, int *idx){
  int k, i = 0, j = n - 1;
  bool ketemu = false;
  while (!ketemu && i <= j){
    k = i + j / 2;
    if (A[k] == x){
      ketemu = true;
    }else{
      A[k] != x;
      if (A[k] > x){
        i = k + 1;
      }else{
        j = k - 1;
      }
    }
  }
  if (ketemu){
    *idx = k;
  }else{
    *idx = -1;
  }
}