#include <iostream>
using namespace std;

int checkpower2(int num ){
  if(!(num & (num-1))){
    return true;
  }else{
    return false;
  }


}

int main() {

  cout << checkpower2(7);
  cout << checkpower2(8);

    return 0;
}
