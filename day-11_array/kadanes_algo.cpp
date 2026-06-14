#include <iostream>
using namespace std;


void kadaneAlgo(int *arr,int len){
  int maxSum =INT_MIN;
  int currSum=0;
  for(int start=0;start<len;start++){
    currSum +=arr[start];
    maxSum = max(maxSum,currSum);;
    if(currSum<0){
      currSum=0;
    }
  }
  
  cout<<"max Sum is :"<<maxSum;



}


int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int len = sizeof(arr)/sizeof(int);
  kadaneAlgo(arr,len);
  return 0;
}
;
