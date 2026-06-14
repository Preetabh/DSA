#include <iostream>
using namespace std;

void maxSumArray(int *arr,int len){
  int maxSum= INT_MIN;
  int currSum =0;

  for(int start=0;start<len;start++){
    for(int end= start;end<len;end++){
      for(int i=start;i<=end;i++){
        currSum+=arr[i];
      }
      maxSum = max(currSum,maxSum);
      currSum=0;
    }
  }
  cout <<"Max sum is:"<<maxSum ;

}

void maxSumArray2(int *arr,int len){
  int maxSum = INT_MIN;

  for(int start=0;start<len;start++ ){
    int currSum =0;
    for(int i=start;i<len;i++){
      
      currSum +=arr[i];
    }
    maxSum =max(maxSum,currSum);
  }
  cout <<"The max Number is:"<<maxSum;
}
int main(){
    int arr[6]={2,-3,6,-5,4,2};
    int len = sizeof(arr)/sizeof(int);
    // maxSumArray(arr,len);
    maxSumArray2(arr,len);

  return 0;
}
