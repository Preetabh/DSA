#include <iostream>
using namespace std;

void sectionSort( int *arr, int n){
  int min=INT_MAX;
  for(int i=0;i<n-1;i++){
    min = i;
    for(int j=i+1;j<n;j++){
      if(arr[j]<arr[min]){
        min = j;
      }
    }
    swap(arr[i],arr[min]);

  }
   for(int k=0;k<n;k++){

  cout << arr[k] << "," ;
  }

}

int main (){
  int arr[]={10,5,12,1,13};
  int n = sizeof(arr)/sizeof(int);
  sectionSort(arr,n);
  return 0;
}
