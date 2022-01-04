#include <iostream>
using namespace std;

int main(){
  int n; 
  cout << "Inputkan anak ayam = "; cin >> n;
  cout << "Anak Ayam Turun " << n;
  cout << endl;
  for(int i = n; i > 0; i-- ){
    if(i != 1){
      cout << "Anak Ayam Turun " << i << ", mati satu tinggal " << i - 1 << endl;
    }else{
      cout << "Anak Ayan Turun " << i << ", mati satu tinggal induknya";
    }
  }
  cout << endl;
  return 0;
}