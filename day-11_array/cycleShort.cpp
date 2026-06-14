#include <iostream>
using namespace std;

void cycleShort(int *arr,int n){
  int i=0;
  while(i<n){
    int correctIdx=arr[i]-1;
    if(arr[i]!=arr[correctIdx]){
      swap(arr[i],arr[correctIdx]);
    }else{
      i++;
    }

  }
  int k=0;
  while(k<n){
    cout<<arr[k];
    k++;
  }
}




int main(){
  int arr[]={2,4,3,5,1};
  int n= sizeof(arr)/sizeof(int);
  cycleShort(arr,n);
  return 0;
}
