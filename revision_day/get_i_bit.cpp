#include <iostream>
using namespace std;
int  check_i_bit(int num , int i){
  int bitMask= (1<<i);
  if(!(num &bitMask)){
    return 0;
  }else{
    return 1;
  }

}

int main() {
    int num =1,i=2;
   cout<< check_i_bit(num,i);
    return 0;
}
