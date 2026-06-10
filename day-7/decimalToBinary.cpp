#include <iostream>
using namespace std;

int decToBin(int dec){
  int n= dec;
  int bin =0;
  int pow=1;
  while(n>0){
    int rem = n%2;
    bin +=rem*pow;
    pow *=10;
    n=n/2;
  }
  return bin;

}

int main(){
cout << decToBin(4);
}
