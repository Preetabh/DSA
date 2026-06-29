#include <iostream>
using namespace std;

void lastOccurence(int arr[],int n, int i,int target){
  if(n>0){


  if(arr[n]==target){
    cout << "Your Targeted index is: " << n<<endl;
  }
  else{
    lastOccurence(arr,n-1,i+1,target);
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
  int target=1;
  lastOccurence(arr,len,i,target);

    return 0;
}
