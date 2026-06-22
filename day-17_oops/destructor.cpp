#include <iostream>
using namespace std;

class Vishu{
  public:
  string name;
  string color;
  int *milage;

  Vishu(string name,string color){
    this->name=name;
    this->color=color;
    milage = new int; //dynamic allocation
    *milage = 12;
  };

  // destructor
  ~Vishu(){
    cout <<" Destroying the data..."<<endl;
    if(milage!=NULL){
      delete milage;
      milage=NULL;
    }
    cout <<" Destroyed ."<<endl;

  }
};


int main() {

  Vishu v1("audi","yellow");
  cout <<v1.name<<endl;
  cout <<v1.color<<endl;
  cout <<*(v1.milage)<<endl;

    return 0;
}
