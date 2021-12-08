#include <iostream>

using namespace std;
int main()
{
  int nim[4] = {12,99,34,63};
  for(int i = 0; i < (sizeof(nim)/sizeof(*nim)); i++){
    cout << nim[i] << " index array " << i << endl;
  }
}