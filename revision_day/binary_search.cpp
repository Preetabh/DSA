#include <iostream>
using namespace std;
int binary_search(int *arr, int len, int target)
{
    int left = 0;
    int right = len - 1;
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (arr[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            left = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[5] = {12, 34, 54, 13, 33};
    int len = sizeof(arr) / sizeof(arr[0]);
    int target = 54;
    cout << binary_search(arr, len, target);

    return 0;
}
