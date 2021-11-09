#include <iostream>

using namespace std;

int main()
{
  // DECLARATION
  int A, B, C;

  A = 8;
  B = 5;

  // ALGORITHM
  cout << "A value before exchange: " << A << endl;
  cout << "B value before exchange: " << B << endl;

  cout << "========================" << endl;

  C = A;
  A = B;
  B = C;

  cout << "A value after exchange: " << A << endl;
  cout << "B value after exchange: " << B << endl;

  return 0;
}