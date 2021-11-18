#include <iostream>

using namespace std;
int main()
{
  int tallBody;
  float weightBody;
  
  cout << "Input your tall body : "; cin >> tallBody;

  weightBody =  (tallBody - 100) - (tallBody * 10 / 100);

  cout << "Your tall body : " << tallBody;
  cout << endl << "Your ideal weight body : " << weightBody;

  return 0; 
}