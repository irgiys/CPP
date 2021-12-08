#include <iostream>

using namespace std;
int main()
{
  int sum, subt, mult, div, mod, incre, decre;
  /*
  sum   = summation
  subt  = subtraction
  mult  = multiplication
  div   = division
  mod   = modulus
  incre = increment
  decre = decrement
  */

  sum = 2 + 2;
  subt = 4 - 2;
  mult = 2 * 2;
  div = 10 / 2;
  mod = 10 % 2;
  incre = 20;
  decre = 10;

  incre++;
  decre--;

  cout << endl << "This is sum = 2 + 2 = " << sum;
  cout << endl << "This is subt = 4 - 2 = " << subt;
  cout << endl << "This is mult = 2 * 2 = " << mult;
  cout << endl << "This is div = 10 / 2 = " << div;
  cout << endl << "This is mod = 10 % 2 = " << mod;
  cout << endl << "This is incre = 20 = " << incre;
  cout << endl << "This is decre = 10 = " << decre;

  return 0;

}