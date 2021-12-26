#include <iostream>
using namespace std;

int main(){
  int age;
  cout << "How old are you = "; cin >> age;
  try{
    // Block of code to try
    if(age >= 18){
      cout << "Access granted - you are old enough.";
    }else{
      throw(age);
    }
  }
  catch (int myNum) {
    cout << "Access denied - you must be at least 18 years old. \n";
    cout << "Age is: " << myNum;
  }
  cout << endl;
  return 0;
}