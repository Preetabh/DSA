#include <iostream>
using namespace std;

void factorial(int num) {
    int total = 1;

    for (int i = 1; i <= num; i++) {
        total *= i;
    }

    cout << total;
}

int main() {
    factorial(5);
    return 0;
}
