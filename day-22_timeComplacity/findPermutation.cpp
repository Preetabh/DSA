// backTracking approach to find all the permutations of a string
#include <iostream>

using namespace std;

void findPermutation(string str,string permutation){
  if(str.length()==0){
    cout <<permutation<<endl;
  }
  else{
    for(int i=0;i<str.length();i++){
      char ch=str[i];
      findPermutation(str.substr(1,str.length()-1),permutation+ch);
    }
  }
}


int main() {
  string str ="abcd";
  int n=str.length();
  string permutation="";
  findPermutation(str,permutation);


    return 0;
}
