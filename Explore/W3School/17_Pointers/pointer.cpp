#include <iostream>

using namespace std;
int main()
{
  int a = 1;
  int *aPtr = nullptr;
  cout << "Pointer a " << &a << endl;
  cout << "null pointer " << aPtr << endl;
  aPtr = &a;
  cout << "Pointer a after assign a" << aPtr << endl;

  cout << "===================" << endl;
  cout << "size of a " << sizeof(a) << endl;
  cout << "size of int " << sizeof(int) << endl; 
  cout << sizeof(&a);
  cout << " size of a pointer " << sizeof(aPtr);
  return 0;

}

