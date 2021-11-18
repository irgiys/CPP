#include <iostream>

using namespace std;
int main()
{
  int day, month, year, remainDay;

  cout << endl << "Input the day : "; cin >> day;

  year = day / 365;
  remainDay = day % 365;

  month = remainDay / 30;
  remainDay = remainDay % 30;

  day = remainDay;

  cout << year << " year, " << month << " month, " << day << " day";
  
  return 0;  
}