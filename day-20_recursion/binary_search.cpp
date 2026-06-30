#include <iostream>
using namespace std;

void binarySearch(int arr[], int size, int start, int end, int target)
{
  int mid = start + (end - start) / 2;
  if (start > end)
  {
    cout<< -1;
    return;
  }
  if (target == arr[mid])
  {
    cout << mid;
    return;
  }
  else if (arr[mid] > target)
  {
    binarySearch(arr, size, start, mid - 1, target);
  }
  else
  {
    binarySearch(arr, size, mid + 1, end, target);
  }
}

int main()
{
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
  int size = sizeof(arr) / sizeof(arr[0]);
  int start = 0;
  int end = size - 1;
  int target = 8;

  binarySearch(arr, size, start, end, target);

  return 0;
}
