// #include <iostream>
// using namespace std;

// void reverseArr(int arr[], int len) {
//     for(int i = len - 1; i >= 0; i--) {
//         cout << arr[i] << " ";
//     }
// }

// int main() {
//     int arr[] = {1,2,3,4,5};
//     int len = 5;

//     reverseArr(arr, len);

//     return 0;
// }


// solve using (2 pointer approach)

#include <iostream>
using namespace std;

void reverseArr(int arr[], int len) {
    int left = 0;
    int right = len - 1;

    while (left < right) {
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main() {
    int arr[] = {2, 3, 69, 456, 456};
    int len = 5;

    reverseArr(arr, len);
    cout << arr[4] <<endl ;



    return 0;
}
