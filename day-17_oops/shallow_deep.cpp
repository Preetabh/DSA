#include <iostream>
using namespace std;

class Vishu
{
public:
  string name;
  string color;
  int *milage;

  Vishu(string name, string color)
  {
    this->name = name;
    this->color = color;
    milage = new int;
    *milage = 12;
  };

  Vishu(Vishu &orginal)
  {
    cout << "copying... to orginal to new!\n";
    name = orginal.name;
    color = orginal.color;
    milage = orginal.milage;
  };
};

int main()
{

  Vishu v1("audi", "yellow");
  Vishu v2(v1);
  *v1.milage=20;


  cout << v2.name << endl;
  cout << v2.color << endl;
  cout << *(v2.milage) << endl;
  cout << *(v1.milage) << endl;

  return 0;
}
