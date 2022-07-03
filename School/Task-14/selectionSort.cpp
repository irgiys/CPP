#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int ArrayInt[NMAKS];

void bacaArray(ArrayInt A, int n);
void tampilArray(ArrayInt A, int n);
void selectionSort(ArrayInt A, int n);

int main(){
  // Deklarasi
  ArrayInt A;
  int n;
  // Algoritma
  cout << "Masukkan banyaknya data : "; cin >> n;
  bacaArray(A, n);
  cout << "Data sebelum di short : ";
  tampilArray(A, n);
  selectionSort(A, n);
  cout << endl << "Data sesudah di short : ";
  tampilArray(A, n);
  cout << endl;
  return 0;
}

void bacaArray(ArrayInt A, int n){
  for (int i = 0; i < n; i++){
    cout << "Masukkan data array ke A[" << i << "] : "; cin >> A[i]; 
  }
}

void tampilArray(ArrayInt A, int n){
  for (int i = 0; i < n; i++){
    cout << "\t" << A[i];
  } 
}

void selectionSort(ArrayInt A, int n){
  int imin, temp;
  for (int i = n-1; i > 0; i--){
    imin = i;
    for (int j = i-1; j >= 0; j--){
      if (A[j] < A[imin]){
        imin = j;
      }
    }
    temp = A[i];
    A[i] = A[imin];
    A[imin] = temp;
  }
}