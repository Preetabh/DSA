#include <iostream>
#include <vector>
using namespace std;

void spiralMatrix(int arr[][4], int n, int m)
{
  int srow = 0, scol = 0;
  int erow = n - 1, ecol = m - 1;

   while(srow <= erow && scol <= ecol){
  // top
  for (int i = srow; i <= ecol; i++)
  {
    cout << arr[srow][i] << " ";
  }

  // right
  for (int j = srow + 1; j <= erow; j++)
  {
    cout << arr[j][erow] << " ";
  }

  // bottom
  for (int k = ecol - 1; k >= scol; k--)
  {
    cout << arr[erow][k] << " ";
  }

  // left
  for (int l = erow - 1; l > scol; l--)
  {
    cout << arr[l][scol] << " ";
  }
  srow++,scol++,erow--,ecol--;
}
}

int main()
{
  int arr[4][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
      {9, 10, 11, 12},
      {13, 14, 15, 16}};
  int n = 4, m = 4;
  spiralMatrix(arr, n, m);

  return 0;
}
