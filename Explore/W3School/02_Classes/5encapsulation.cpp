#include <iostream>
using namespace std;

class Employee {
  private : 
  // private attribute
  int salary;

  public :
  // Setter 
  void setSalary(int s) {
    salary = s;
  }
  // Getter 
  int getSalary() {
    return salary;
  }
};

int main(){
  Employee myObj;
  myObj.setSalary(5000000);
  cout << myObj.getSalary();
  cout << endl;
  return 0;
}