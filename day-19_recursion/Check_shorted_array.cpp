#include <iostream>
using namespace std;

void CheckArray(int arr[], int n)
{
    if (n == 0)
    {
        cout << "Array is Sorted";
        return;
    }

    if (arr[n] >= arr[n - 1])
    {
        CheckArray(arr, n - 1);
    }
    else
    {
        cout << "Array is Not Sorted";
    }
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};

    CheckArray(arr, 4);

    return 0;
}
