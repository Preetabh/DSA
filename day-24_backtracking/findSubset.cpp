#include <iostream>
using namespace std;
void findSubset(string str,string subset){
  if(str.length()==0){
    cout <<subset<<endl;
  }else{
    char ch=str[0];
    string remaining=str.substr(1);

    findSubset(remaining,subset+ch);// yes

    findSubset(remaining,subset);// no
  }
}

int main() {
  string str="abc";
  string subset="";
  findSubset(str,subset);


    return 0;
}
