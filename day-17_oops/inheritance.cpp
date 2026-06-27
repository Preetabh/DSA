#include <iostream>
using namespace std;

class Animal{
  public:
  string color;

  void eat(){
    cout <<"Eating the food\n";
  };
  void breathe(){
    cout <<"Breathe\n";
  };
};

class Fish :public Animal{
  public:
  int fins;

  void swim(){
    eat();
    cout<<"Fish is swim\n";

  };
};

int main() {
  Fish f1;
  f1.fins=4;
  f1.breathe();
  f1.swim();
    return 0;
}
