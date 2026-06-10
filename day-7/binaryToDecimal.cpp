#include <iostream>
using namespace std;


int binToDec(int bin){
  int n= bin;
  int dec=0;
  int pow =1;
  while (n>0)
  {
    int lastDig = n%10;
    dec += (lastDig*pow);
    pow = pow*2;
    n = n/10;
  };
  return dec;


}

int main(){

cout << binToDec(10101) << endl;
}
