#include <iostream>
using namespace std;

void bubbleSort(int *arr, int len){
  for(int i=0;i<len-1;i++){
    for(int j=0;j<len-1-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }

    }
  }
  for(int k=0;k<len;k++){

  cout << arr[k] << "," ;
  }
}

int main(){
  int arr[]={10,5,12,1,13};
  int len = sizeof(arr)/sizeof(int);
  bubbleSort(arr,len);
  return 0;
}
