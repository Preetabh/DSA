#include <iostream>
using namespace std;

class User{
  private:
  int id;
  string password;
  public:
  string name;
// constructor
  User(int id){
    this->id=id;
  };
  // setter
  void setPassword(string password){
    this->password=password;
  };
  // getter

  string getPassword(){
    return password;
  }
};

int main() {
  User u1(101);
u1.name="vishu";
  u1.setPassword("vishu2005\n");
  cout << u1.name<<endl;
  cout << u1.getPassword();


    return 0;
}
