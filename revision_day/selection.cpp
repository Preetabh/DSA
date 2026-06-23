#include <iostream>
using namespace std;
void selection(int *arr, int len){
  int min = INT_MAX;
  for(int i=0;i<len;i++){
    min=i;
    for(int j=i+1;j<len;j++){
      if(arr[j]<arr[min]){
        min=j;
      }
    }
  }
  



};

int main() {
  int arr[5]={12,9,6,31,1};
  int len = sizeof(arr) / sizeof(arr[0]);
    selection(arr,len);
    return 0;
}
