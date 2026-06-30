#include <iostream>
using namespace std;

void findIndex(int arr[], int len, int key, int i) {
    // Base case
    if (i >= len)
        return;

    // Work
    if (arr[i] == key) {
        cout << i << " ";
    }

    // Recursive call
    findIndex(arr, len, key, i + 1);
}

int main() {
    int arr[] = {3, 2, 4, 5, 6, 2, 7, 2, 2};
    int len = sizeof(arr) / sizeof(arr[0]);
    int key = 2;

    findIndex(arr, len, key, 0);

    return 0;
}
