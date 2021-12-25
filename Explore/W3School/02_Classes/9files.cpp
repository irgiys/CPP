#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
  string myText;
  // Create and open a text file
  ofstream MyFile("testfile.txt");
  // Write to the file 
  MyFile << "Test fileeess";
  // Read file 
  ifstream MyReadFile("filename.txt");
  // use while looop together with getline() function to read the file line by line
  while(getline (MyReadFile,myText)){
    cout << myText;
  }
  // Close the file
  MyFile.close();
  MyReadFile.close();
  cout << endl;
  return 0;
}