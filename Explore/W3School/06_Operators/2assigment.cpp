#include <iostream>

using namespace std;
int main()
{
  int x = 100;
  
  x += 5;
  cout << endl << "x += 5 : " << x;
  x -= 3;
  cout << endl << "x -= 3 : " << x;
  x *= 3;
  cout << endl << "x *= 3 : " << x;
  x /= 3;
  cout << endl << "x /= 3 : " << x;
  x %= 3;
  cout << endl << "x %= 3 : " << x;
  x &= 3;
  cout << endl << "x &= 3 : " << x;
  x |= 3;
  cout << endl << "x |= 3 : " << x;
  x ^= 3;
  cout << endl << "x ^= 3 : " << x;
  x >>= 3;
  cout << endl << "x >>= 3 : " << x;
  x <<= 3;
  cout << endl << "x <<= 3 : " <<x; 

  return 0;
}