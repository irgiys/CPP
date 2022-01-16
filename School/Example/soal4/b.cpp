#include <iostream>
using namespace std;

int main(){
  int n;
  cout << "Inputkan nomor: "; cin >> n;
  for(int i = 0; i < n; i++){
    cout << n;
    for(int j = 0; j < n; j++){
      cout << " #";
    }
    cout << endl;
  } 
  cout << endl;
  return 0;
}