#include <iostream>
using namespace std;
int overflow(){

  cout <<"Hello"<<endl;
  overflow(); //very dangarous don't be try and bad try..
}

int main() {
    overflow();
    return 0;
}
