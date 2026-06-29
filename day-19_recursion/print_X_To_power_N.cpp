#include <iostream>
using namespace std;

int printXPowerN(int x, int n)
{
    if (n == 0)
    {
        return 1;
    }

    return x * printXPowerN(x, n - 1);
}

int main()
{
    int x = 2;
    int n = 3;

    cout << printXPowerN(x, n);

    return 0;
}
