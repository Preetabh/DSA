#include <iostream>
using namespace std;

int titlingProblem(int n){
  if(n==0 || n==1){
    return 1;
  };
  // vertical
  int ans1= titlingProblem(n-1);
  // horizontal
  int ans2 = titlingProblem(n-2);
  return ans1+ans2;
}

int main() {
  cout << titlingProblem(4);

    return 0;
}
