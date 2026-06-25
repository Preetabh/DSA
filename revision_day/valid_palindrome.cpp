#include <iostream>
using namespace std;

bool validPalindrome(char arr[], int len) {
    int start = 0, end = len - 1;

    while (start < end) {
        if (arr[start] != arr[end]) {
            return false;
        }
        start++;
        end--;
    }

    return true;
}

int main() {
    char arr[] = "racecaar";

    cout << validPalindrome(arr, strlen(arr));

    return 0;
}
