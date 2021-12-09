#include <iostream>
#include <string>
using namespace std;

void myFunc(string fname = "Popol", int age = 19){
  cout << fname << " Referss name " << age << " years old" << endl;
}

int sumFunc(int x, int y){
  return x + y;
}

int main(){
  myFunc("Loi", 20);
  myFunc("Subo", 21);
  // using default parameter popol
  myFunc();
  cout << sumFunc(20, 10);
  cout << endl;
  return 0;
}