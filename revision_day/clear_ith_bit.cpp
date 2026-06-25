#include <iostream>
using namespace std;
int  clear_i_bit(int num , int i){
  int bitMask= ~(1<<i);
  return num &bitMask;

}

int main() {
    int num =1,i=2;
   cout<< clear_i_bit(num,i);
    return 0;
}
