#include <iostream>
using namespace std;

int linear_search(int arr[], int len){
  int largestNumber = arr[0];
  int largestIndex = 0;
  for(int i=1;i<=len;i++){
    if(arr[i]>largestNumber){
      largestNumber = arr[i];
      largestIndex = i;

    }
  }
  return largestIndex;
}

int main(){
 const int len =5;
  int arr[len]={1,22,44,55,99};
  cout << linear_search(arr,len) << endl;


  return 0;
}


public class Main {

    public static int linearSearch(int[] arr, int len) {
        int largestNumber = arr[0];
        int largestIndex = 0;

        for (int i = 1; i < len; i++) {
            if (arr[i] > largestNumber) {
                largestNumber = arr[i];
                largestIndex = i;
            }
        }

        return largestIndex;
    }

    public static void main(String[] args) {
        int[] arr = {1, 22, 44, 55, 99};
        int len = arr.length;

        System.out.println(linearSearch(arr, len));
    }
}
