#include <iostream>
using namespace std;

int main(){
  int i= 1, j;
  while (i <= 5)
  {
    j = 1;
    while (j <= 5)
    {
      cout << j * i << " ";
      j++;
    }
    cout << endl;
    i++;
  }
  
  cout << endl;
  return 0;
}