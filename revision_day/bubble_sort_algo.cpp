#include <iostream>
using namespace std;

void bubbleSort(int *arr , int len){
  for(int i=0 ; i<len; i++){
    for(int j=0; j<len-i;j++){
      if(arr[j]>arr[j+1]){
        swap(arr[j],arr[j+1]);
      }
    }
  }
  for(int k=0; k<len;k++){
    cout << arr[k] << ",";
  }

};

int main() {
  int arr[5]={12,9,6,31,1};
  int len = sizeof(arr) / sizeof(arr[0]);

  bubbleSort(arr,len);

    return 0;
}
