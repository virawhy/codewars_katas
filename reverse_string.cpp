#include <iostream>

using namespace std;

string reverseString(string str)
{
  return string(str.rbegin(), str.rend());
}

int main()
{
  cout << reverseString("hello") << endl;
  return 0;
}