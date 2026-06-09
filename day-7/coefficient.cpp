#include <iostream>
using namespace std;
// ncr = n!/(r!(n-r)!)--------->>> formula for coeffiecient

int coefficient(int n , int r) {
  int facN = 1;

    // find the factorial of n
    for(int i=1;i<=n;i++){
      facN *=i;
    };

    int facR = 1;
    // find the factorial of r
    for(int j=1;j<=r;j++){
      facR *=j;
    };

    //find thr factorial of (n-r)
    int facNR =1;

    for(int k=1;k<=(n-r);k++){
      facNR *=k;
    };

    return facN / (facR * facNR);



}

int main() {
  cout << coefficient(4, 2) << endl;
  return 0;
}
