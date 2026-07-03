#include <iostream>
using namespace std;

void binToDec(int bin){
  int pow=1;
  int n=bin;
  int dec=0;
  while(n>0){
    int lastDeg=bin %10;
    dec += lastDeg*pow;
    pow *=2;
    n= n/10;

  }
  cout << dec;

}

int main() {
binToDec(10011);
    return 0;
}
