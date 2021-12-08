#include <iostream>
#include <string>

using namespace std;
int main()
{
  string cars[] = {"Ford", "Mustang", "BMW", "Toyota"};
  cars[4] = "Kijang";
  cout << "Cars size : " << (sizeof(cars)/sizeof(*cars));
  cout << endl;
  cout << cars[4] << endl;
  // The size is always 5
  string cars2[5] = {"Tesla", "Mazda", "Volvo"};
  cout << "Cars 2 size : " << (sizeof(cars2)/sizeof(*cars2));
  cout << endl;

  // You can also add the rest 
  cars2[3] = "Toyota";
  cars2[4] = "Mustang";
  cout << cars2[4];
}