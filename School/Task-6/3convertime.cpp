#include <iostream>

using namespace std;
int main()
{
  int second, minute, hour, day;

  cout << "Input time in second : "; cin >> second;

  day = second / 86400;
  second = second % 86400;

  hour = second / 3600;
  second = second % 3600;
  
  minute = second / 60;
  second = second % 60;

  cout << day << " Day, " << hour << " Hour, " << minute << " Minute, " << second << " Second.";
  
  return 0;
}