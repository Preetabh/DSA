#include <iostream>
using namespace std;

void updateBitValue(int num,int i ,int val){
  num =((num & ~(1<<i)));
  num = num | (val<<i);
  cout << num;
}

int main() {
  updateBitValue(7,3,1);
    return 0;
}
