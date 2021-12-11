#include <iostream>
#include <string>
using namespace std;

// constructor is a special method in c++
// class Myclass // the  class
// {
// public: // access specifier
//   Myclass(){ // constructor
//     cout << "Hello constructor";
//   }
// };

// constructor paramaters
class Car{
  public : 
    string brand;
    string model;
    int year;
    Car(string x, string y, int z);
    // { // constructor parameter
    //   brand = x;
    //   model = y;
    //   year = z;
    // }
};
// constructor definiton outside the class 
Car::Car(string x, string y, int z){
  brand = x;
  model = y;
  year = z;
}

int main(){
  // Myclass myObj; // create an object of Myclass (this will call constructor) 
  string carBrand;
  string carModel;
  int carYear;
  cout << "Input car brand = "; getline(cin, carBrand);
  cout << endl << "Input car model = "; getline(cin, carModel);
  cout << endl << "Input car year = "; cin >> carYear;
  
  Car carObj1(carBrand, carModel, carYear);
  Car carObj2("Tesla", "Soe", 2020);

  cout << endl;
  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
  return 0;
}