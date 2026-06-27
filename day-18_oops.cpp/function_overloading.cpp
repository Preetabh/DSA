#include <iostream>
using namespace std;
class Vishu{
  public:
    void hello(int num){
      cout <<"Num:"<<num<<endl;
    }
    void hello(string str){
      cout <<"String:"<<str<<endl;
    }
};

int main() {
  Vishu v1;
  v1.hello(25);
  v1.hello("vishu");


    return 0;
}

