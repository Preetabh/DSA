#include <iostream>
using namespace std;

int main() {
    string str="abcd";
    int len = str.length();
    int totalSubsets = 2^len;
    cout << totalSubsets << endl;
    return 0;
}
