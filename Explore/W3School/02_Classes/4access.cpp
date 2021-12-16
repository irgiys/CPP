#include <iostream>
using namespace std;

class MyClass {
  int z; // By default is private attribute

  public : // Access specifier Public
    int x; // Public attribute

  private: // access specifier Private
    int y;  // Private attribute
    
};

int main(){
  MyClass myObj;
  myObj.x = 20; // Allowed (public)
  // myObj.y = 30; // Not allowed (private)

  cout << endl << myObj.x;
  cout << endl;
  return 0;
}