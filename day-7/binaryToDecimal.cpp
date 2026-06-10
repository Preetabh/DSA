#include <iostream>
using namespace std;


int binToDec(int bin){
  int n = bin;
  int dec=0;
  int pow =1;
  while(n>0){
   int lastdig= n%10;
    dec += (lastdig*pow);
    pow *= 2;
    n = n/10;
  };
      return dec;



}

int main(){
cout << binToDec(1111111) << endl;
}
