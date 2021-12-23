#include <iostream>
using namespace std;

class Animal {
  public :
    void animalSound(){
      cout << "The animal sound look like";
    }
};
class Cat : public Animal {
  public :
    void animalSound(){
      cout << "Cat says = Meow me0w";
    }
};
class Bird : public Animal {
  public : 
    void animalSound(){
      cout << "Bird says = pic pic waik";
    }
};
int main(){
  Animal myAnimal;
  Cat myCat;
  Bird myBird;

  myAnimal.animalSound();
  cout << endl;
  myCat.animalSound();
  cout << endl;
  myBird.animalSound();
  cout << endl;
  return 0;
}