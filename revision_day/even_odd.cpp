#include <iostream>
using namespace std;
void checkEvenOdd(int num){
  if((num &1)==0){
    cout <<"Even";
  }else{
    cout<<"Odd";
  }
}

int main() {
  int num=4;
    checkEvenOdd(num);
    return 0;
}
