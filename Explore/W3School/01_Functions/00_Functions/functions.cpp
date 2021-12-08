#include <iostream>
using namespace std;

// void means that function doesnt have return value
// void myFunc(){ // declaration
//   cout << "I Just Executed wow\n"; // definition
// }

// you can also do this
void myFunc(); // declaration

int main(){
  // call the function
  myFunc();
  myFunc();
  return 0;
}
// definition
void myFunc(){ 
  cout << "I Just Executed wow\n";
}