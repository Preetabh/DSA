#include <iostream>
using namespace std;

void linearSearch(int *arr,int len){
  int largestNum=arr[0];

  for (int i = 0; i < len; i++)
  {
   largestNum = max(largestNum, arr[i]);
  }
  cout << largestNum;


};

int main() {
  int arr[5]={1,2,3,4,5};
  int len = sizeof(arr) / sizeof(arr[0]);
    linearSearch(arr,len);
    return 0;
}
