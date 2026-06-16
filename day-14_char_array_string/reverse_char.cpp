#include <iostream>
using namespace std;

void reverseChar(char arr[],int len){
  int start=0,end=len-1;
  for(int i=0;i<end;i++){
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
  for(int j=0;j<len;j++){

    cout<<arr[j];
  }
}

int main() {
  char arr[6]="vishu";
  int len=6; 
  reverseChar(arr,len);
    return 0;
}
