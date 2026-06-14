#include <iostream>
using namespace std;


void printSubArray(int *arr,int len){

  for(int start=0;start<len;start++){
    for(int end=start;end<len;end++){
      cout <<"("<< start << "," <<end <<")";
    }
  }

}


int main(){
  int len =5;
  int arr[5]={1,2,3,4,5};
  printSubArray(arr,len);
  return 0;
}
;
