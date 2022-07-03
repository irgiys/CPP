#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int arrayInt[NMAKS];

void bacaArray(arrayInt A, int n);
void liatArray(arrayInt A, int n);
void insertionShort(arrayInt A, int n);
int main(){
  arrayInt A;
  int n;
  cout << "Inputkan banyaknya array : ";
  cin >> n;
  bacaArray(A, n);
  cout << endl << "Sebelum di short \t: ";
  liatArray(A,n);
  cout << endl << endl;
  insertionShort(A, n);
  cout << endl << "Sesudah di short \t: ";
  liatArray(A, n);
  cout << endl;
  return 0;
}
void bacaArray(arrayInt A, int n){
  for (int i = 0; i < n; i++){
    cout << "Inputkan nilai array ke A["<<i<<"] : "; cin >> A[i];
  };
}
void liatArray(arrayInt A, int n){
  for (int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }; 
}
void insertionShort(arrayInt A, int n){
  int i, temp, j;
    for (i = 1; i < n; i++){
        temp = A[i];
        j = i - 1;
        while (j >= 0 && A[j] > temp){
            A[j + 1] = A[j];
            liatArray(A,n);
            cout << endl;
            j = j - 1;
        }
        A[j + 1] = temp;
    }
}
