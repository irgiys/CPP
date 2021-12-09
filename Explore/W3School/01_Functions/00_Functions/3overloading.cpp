#include <iostream>
using namespace std;

int plusFunc(int x, int y){
  return x + y;
}
double plusFunc(double x, double y){
  return x + y;
}

// you can named function same as other function as long as the number or/and type of parameters are different.
int main(){
  int myNum1 = plusFunc(4,3);
  double myNum2 = plusFunc(2.3,2.4);

  cout << myNum1 << " Int Num" << endl ;
  cout << myNum2 << " Double Num" << endl;
  return 0;
}
