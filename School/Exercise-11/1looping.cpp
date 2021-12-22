#include <iostream>
using namespace std;

int main(){
  int n, i, sum;
  sum = 0;
  cout << "Inputkan nilai n = "; cin >> n;
  for (i = 1; i <= n; i++){
    cout << i << " sum = " << sum << endl;
    sum += i;
  }
  cout << i << " sum = " << sum;
  cout << endl;
  return 0;
}