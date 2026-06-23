#include <iostream>
using namespace std;

void reverseArr(int *arr, int len) {
    int Reverse[5];
    int k = 0;

    for (int i = len - 1; i >= 0; i--) {
        Reverse[k] = arr[i];
        k++;
    }

    for (int i = 0; i < len; i++) {
        cout << Reverse[i] << " ";
    }
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int len = 5;

    reverseArr(arr, len);

    return 0;
}
