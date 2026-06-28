#include <iostream>
using namespace std;
void recursion(int n){
  if(n!=0){
    recursion(n-1);
    cout <<n<<endl;
  }else{

  };

};

int main() {
  int n=5;
  recursion(n);


    return 0;
}
