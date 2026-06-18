#include <iostream>
using namespace std;

int clearIbit(int num, int i)
{
  int bitMark = ~(1 << i);
  return num & bitMark;
}

int main()
{
  cout << clearIbit(6,2);

  return 0;
}
