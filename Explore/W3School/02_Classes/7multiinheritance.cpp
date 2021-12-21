#include <iostream>
using namespace std;

// Base class (parent)
class MyClass {
  protected : // protected access specifier can be accessed in the inherited class
    int salary;
  public : 
    void myFunction(){
      cout << "Some content in parent class.";
    }
};
class MyAnotherClass {
  public :
    void myAnotherFunction(){
      cout << "Some content in another class.";
    }
};
// Derived class (child)
class MyChild: public MyClass , public MyAnotherClass{
    public :
      int bonus;
      void setSalary(int s){
        salary = s;
      }
      int getSalary(){
        return salary;
      }
};

// Derived class (grandchild)
class MyGrandChild: public MyChild {
};
int main(){
  MyGrandChild myObj;
  myObj.myFunction();
  myObj.setSalary(900000);
  myObj.bonus = 200000;
  cout << endl << "Salary " << myObj.getSalary();
  cout << endl << "Bonus " << myObj.bonus << endl;
  myObj.myAnotherFunction();
  cout << endl;
  return 0;
}