#include <iostream>
using namespace std;

int find_largest_value(int arr[], int len) {
    int lValue = arr[0];

    for(int i = 1; i < len; i++) {
        if(arr[i] > lValue) {
            lValue = arr[i];
        }
    }

    return lValue;
}

int main() {
    const int len = 12;
    int arr[len] = {1, 2,982346,92,357098,989,898,9,423 ,3, 4, 9};

    cout << find_largest_value(arr, len) << endl;

    return 0;
}
