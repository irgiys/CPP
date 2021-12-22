#include <iostream>
using namespace std;

int main(){
  int i, n, x ,sum;
  float avg;
  sum = 0;
  cout << endl << "Inputkan nilai n = "; cin >> n;
  for (i = 1; i < n; i++){
    cout << endl << "Inputkan datanya ke " << i << " = "; cin >> x;
    sum = sum + x;
  }
  avg = sum / n;
  cout << endl << "Rata-ratanya adalah = " << avg;
  cout << endl;
  return 0;
}