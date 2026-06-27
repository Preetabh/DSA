#include <iostream>
using namespace std;

class complex{
  int real;
  int img;

  public:
    Complex(int r,int i){
      real=r;
      img=i;
    }

    void showNum(){
      cout <<real<< " + " << img<<" i \n ";
    }
    void overloading(){
      
    }
};


int main() {

    return 0;
}
