#include <iostream>
using namespace std;

void reverseArray(char chr[],int len){
  int start=0;
  int end=len-1;
  while(start<=end){
    swap(chr[start],chr[end]);
    start++,end--;
  }
  for(int i=0;i<len;i++){
    cout << chr[i];
  }


}

int main() {
  char chr[]="vishu";
  int len = sizeof(chr);
    reverseArray(chr,len);
    return 0;
}
