#include <iostream>
using namespace std;

int main(){
  int num, min;
  cout << "Inputkan Nomor: "; cin >> num;
  min = num;
  while (num != 999){
    cout << "Inputkan Nomor: "; cin >> num;
    if(num < min){
      min = num;
    }
  }
  cout << "Lowest value is : " << min;
  cout << endl;
  return 0;
}