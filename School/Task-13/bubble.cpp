#include<iostream>
using namespace std;

int main (){
   int i, j,temp,pass=0;
   int a[10] = {10,20,20,14,14,25,18, 1,5,45};
   //           0, 1, 2, 3, 4, 5, 6, 7,8, 9
   cout <<"Input list ...\n";
   for(i = 0; i<10; i++) {
      cout <<a[i]<<"\t";
   }
  cout<<endl;
 
  for(i = 0; i<10; i++) {
    for(j = i+1; j<10; j++){
        if(a[j] < a[i]){ 
          temp = a[i];
          a[i] = a[j];
          a[j] = temp;
        }
    }
  pass++;
  }
 
  cout <<"Sorted Element List ...\n";
  for(i = 0; i<10; i++) {
    cout <<a[i]<<"\t";
  }
  cout<<"\nNumber of passes taken to sort the list:"<<pass<<endl;
  return 0;
}