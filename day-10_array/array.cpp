#include <iostream>
using namespace std;

void printArray() {
  const int arrSize = 5;
  int arr[arrSize] = {1, 2, 3, 4, 5};
  for (int i = 0; i < arrSize; i++) {
    cout << arr[i] << endl;
  }
}

int main (){
  printArray();
}
