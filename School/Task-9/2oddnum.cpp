#include <iostream>
#include <string>
using namespace std;
int main(){
  int num, length = 0;
  string result = " buah ( yaitu : ";
  cout << "Inputkan nomor = "; cin >> num;
  while(num > -1){
    if(num % 2 == 0){
      result += to_string(num) + " ";
      length += 1;
    }
    cout << "Inputkan nomor = "; cin >> num;
  }
  result += ")";
  cout << endl << "Banyaknya bilangan bulat " << length << result; 
  cout << endl;
  return 0;
}