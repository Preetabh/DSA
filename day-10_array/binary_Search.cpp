#include <iostream>
using namespace std;

int binarySearch(int arr[], int len, int target)
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
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int arr[] = {2, 3, 69, 456, 789};
    int len = sizeof(arr) / sizeof(arr[0]);

    int target = 456;

    int index = binarySearch(arr, len, target);

    if (index != -1)
    {
        cout << "Found at index: " << index << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }

    return 0;
}
