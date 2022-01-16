#include <iostream>
using namespace std;

int main(){
  for(int i = 20; i <= 78; i++ ){
    if(i % 3 == 0){
      cout << "Irgiyansyah " << i << endl;
    }
    if(i % 5 == 0){
      cout << "Malam B " << i << endl;
    }
  }
  cout << endl;
  return 0;
}