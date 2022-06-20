#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int Arrayint[NMAKS];
void bacaArray(Arrayint A, int n);
void seqSearch2(Arrayint A, int n, int x, int *idx);

int main(){
  Arrayint A;
  int x, n;
  int idx;
  cout << "Tentukan banyaknya elemen array : ";
  cin >> n;
  bacaArray(A, n);
  cout << "Inputkan nilai yang di cari : ";
  cin >> x;
  seqSearch2(A, n, x, &idx);
  if(idx == 1){
    cout << "Sudah terdapat di dalam larik";
  }else{
    n = n + 1;
    A[n] = x;
    cout << "Element tidak terdapat di dalam larik, berhasil di tambahkan";
  }
  cout << endl;
  return 0;
}

void bacaArray(Arrayint A, int n){
  int i;
  for (i = 0; i < n; i++){
    cout << "Inputkan nilai elemen A["<<i<<"] : "; 
    cin >> A[i];
  };
}

void seqSearch2(Arrayint A, int n, int x, int *idx){
  int i = 0;
  while (i < n && A[i] != x) i++;
  A[i] == x ? *idx = 1 : *idx = -1;
}