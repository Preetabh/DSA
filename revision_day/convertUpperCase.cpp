#include <iostream>
using namespace std;

int main() {
    char words[] = "I am a Vishu Awasthi";

    int len = sizeof(words);

    for(int i = 0; i < len; i++) {
        char ch = words[i];

        if(ch >= 'a' && ch <= 'z') {
            words[i] = ch - 'a' + 'A';
        }
    }

    cout << words << endl;
    cout << len;

    return 0;
}
