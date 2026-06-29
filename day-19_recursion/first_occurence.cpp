#include <iostream>
using namespace std;

void firstOccurence(int arr[],int n, int i,int target){
  if(i<n){


  if(arr[i]==target){
    cout << "Your Targeted index is: " << i<<endl;
  }
  else{
    firstOccurence(arr,n,i+1,target);
  }
  }
  else{
    cout << "Your Targeted value is Not found";
  }
}


int main() {

  int arr[5] = {1, 2, 4, 4, 5};

  int len = sizeof(arr) / sizeof(arr[0]);
  int i =0;
  int target=4;
  firstOccurence(arr,len,i,target);

    return 0;
}
