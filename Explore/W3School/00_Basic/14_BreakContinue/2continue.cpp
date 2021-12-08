#include <iostream>

using namespace std;
int main()
{
  for (int i = 0; i < 10; i++)
  {
    // skip
    if(i == 2 || i == 5){
      continue;
    }
    cout << i << "\n";
  }
}