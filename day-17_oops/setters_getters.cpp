#include <iostream>
using namespace std;
class Students
{
  string name;
  double cgpa;

public:
  // setters
  void setName(string nameVal)
  {
    name = nameVal;
  }
  void setCgpa(double cgpaVal)
  {
    cgpa = cgpaVal;
  }
  // getters
  string getName()
  {
    return name;
  }
  double getCgpa()
  {
    return cgpa;
  }
};

int main()
{
  Students s1;
  s1.setName("vishu");
  s1.setCgpa(9.8);
  cout << s1.getName() << endl;
  cout << s1.getCgpa() << endl;

  return 0;
}
