#include <iostream>
using namespace std;

int main(){
  int arr[4][4] = {
        {10, 20, 30, 40},
        {15, 25, 35, 40},
        {27, 29, 37, 48},
        {32, 33, 39, 50}
    };
    cout << *(*(arr + 1) + 2) << endl; // 35
}
