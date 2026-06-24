#include <iostream>
using namespace std;

void cycle_sort(int *arr , int len){
  int i=0;
  while(i<len){
    int currentIdx =arr[i]-1;
    if(arr[i]!=arr[currentIdx]){
      swap(arr[i],arr[currentIdx]);


    }else{
      i++;
    }
  }
  for(int i=0; i<len;i++){
    cout << arr[i];
  }
}

int main() {
  int arr[5]={2,3,5,1,4};
  int len =5;
  cycle_sort(arr,len);

    return 0;
}
