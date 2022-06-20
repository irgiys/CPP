#include <iostream>
using namespace std;

const int NMAKS = 100;
typedef int arrayInt[NMAKS];
void bacaArray(arrayInt A,int n);

int main(){
  arrayInt A;
  int temp, n;
  cout << "Inputkan banyaknya elemen \t: ";
  cin >> n;
  cout << endl;
  bacaArray(A,n);
  cout << "Array sebelum di short \t\t: ";
  for (int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }

  for (int i = n-1; i > 0; i--){
    for (int j = i-1; j >= 0; j--){
      if (A[j] < A[i]){
        temp = A[j];
        A[j] = A[i];
        A[i] = temp;
      }
    }
  }
  cout << endl;
  cout << "Array sesudah di short \t\t: ";
    for (int i = 0; i < n; i++){
    cout << A[i] << "\t";
  }

  cout << endl;
  return 0;
}

void bacaArray(arrayInt A,int n){
  for (int i = 0; i < n; i++){
    cout << "Inputkan nilai elemen A[" << i << "] \t: ";
    cin >> A[i];
  };
}