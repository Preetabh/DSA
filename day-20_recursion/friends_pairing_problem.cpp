#include <iostream>
using namespace std;

int FriendProblem(int n){
  if(n==1 || n==2){
    return n;
  };
  return FriendProblem(n-1) + (n-1)*FriendProblem(n-2);
}

int main() {
  cout << FriendProblem(4);

    return 0;
}
