#include <iostream>
#include <vector>
using namespace std;

int main() {
    int num = 20;

    vector<int> primes;

    for (int i = 2; i <= num; i++) {
        bool isPrime = true;

        for (int j = 2; j * j <= i; j++) {
            if (i % j == 0) {
                isPrime = false;
                break;
            }
        }

        if (isPrime) {
            primes.push_back(i);
        }
    }

    for (int prime : primes) {
        cout << prime << " ";
    }

    return 0;
}
