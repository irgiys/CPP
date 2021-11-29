#include <iostream>

using namespace std;
int main()
{
  int distance;
  struct Date
  {
    /* data */
    int day, month, year, total;
  };
  Date date1;
  Date date2;
  Date result;

  cout << endl << "Input the day before : "; cin >> date1.day;
  cout << endl << "Input the month before : "; cin >> date1.month;
  cout << endl << "Input the year before : "; cin >> date1.year;
  
  cout << endl << "=======================================";
  
  cout << endl << "Input the day after : "; cin >> date2.day;
  cout << endl << "Input the month after : "; cin >> date2.month;
  cout << endl << "Input the year after : "; cin >> date2.year;

  // Calc
  date1.total = (date1.year * 356) + (date1.month * 30) + date1.day;
  date2.total = (date2.year * 356) + (date2.month * 30) + date2.day;
  
  distance = date2.total - date1.total;
  cout << endl << "Distance day : " <<  distance;

  result.year = distance / 356;
  distance = distance % 356;

  result.month = distance / 30;
  distance = distance % 30;

  result.day = distance;

  cout << endl << result.year << " Year, " << result.month << " Month, " << result.day << " Day.";

  return 0;
}