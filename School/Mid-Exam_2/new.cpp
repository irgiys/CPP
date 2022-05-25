#include <iostream>
using namespace std;

void JumJil(int index){
  int jumlah[index], total = 0;
  for (int i = 0; i < index; i++){
    cout << "Inputkan data ke - " << i+1 << " = "; cin >> jumlah[i];
    jumlah[i] % 2 != 0 ? total += 1 : total;
  }
  cout << "Total bilangan ganjil = " << total;
}
int main(){
  int num;
  cout << "Inputkan berapa data = "; cin >> num;
  JumJil(num);
  cout << endl;
  return 0;
}