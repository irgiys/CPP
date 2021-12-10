#include <iostream>
using namespace std;

class Myclass{
  public :
  void myMethod(){
    cout << "Hello method";
  }
};

// with parameters
class Car {
  public :
    int speed(int maxspeed);
};

int Car::speed(int maxspeed){
  return maxspeed;
}
int main(){
  Car myCar;  
  Myclass mineObj;
  cout << myCar.speed(200) << endl;
  mineObj.myMethod();
  return 0;
}