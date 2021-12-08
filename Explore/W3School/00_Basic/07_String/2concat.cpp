#include <iostream>

using namespace std;
int main()
{
  string firstName, lastName, fullName;

  firstName = "Poleaq";
  lastName = "Yolu";
  // fullName = firstName + ' ' + lastName;

  // Append Much faster
  fullName = firstName.append(' '+lastName);
  cout << fullName;
  return 0;
}