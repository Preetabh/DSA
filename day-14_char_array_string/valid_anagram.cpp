#include <iostream>
#include <string>
using namespace std;
bool validAnagram(string s1, string s2)
{
  if(s1.length()!=s2.length()){
          cout << "Not a valid_anagram";

    return false;

  }
  int count[26] = {0};
  for (int i = 0; i < s1.length(); i++)
  {
    int idx = s1[i] - 'a';
    count[idx]++;
  };
  for (int j = 0; j < s2.length(); j++)
  {
    int idx = s2[j] - 'a';
    if (count[idx] == 0)
    {
      cout << "Not a valid_anagram";
      return false;
    }
    count[idx]--;
  }
  cout << " valid_anagram";

  return true;
}
int main()
{

  string arr1 = "anagram";

  string arr2 = "nagaram";


  if (validAnagram(arr1, arr2))

    cout << "Valid Anagram";

  else

    cout << "Not Valid Anagram";

  return 0;
}
