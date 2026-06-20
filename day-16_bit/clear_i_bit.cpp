#include <iostream>
using namespace std;

void clearIbit(int num , int i){
  int bitMask= (~(0)<<i);
  num= (num&bitMask);
  cout << num;
}

int main() {
  clearIbit(15,2);
    return 0;
}
 