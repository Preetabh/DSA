#include <iostream>
using namespace std;


int main()
{
    int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 40},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };

    int n = 4, m = 4;
    int start = 0, end = m - 1;
    int key = 37;

    while (start < n && end >= 0)
    {
        if (arr[start][end] == key)
        {
            cout << "found at cell(" << start << "," << end << ")\n";
            break;
        }
        else if (arr[start][end] > key)
        {
            end--;
        }
        else
        {
            start++;
        }
    }

    return 0;
}
