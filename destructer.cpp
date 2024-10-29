#include <iostream>
using namespace std;

string fun()
{
  string str1 = "Vansh";
  string str2 = "";
  for (int i = str1.length() - 1; i >= 0; i--)
  {
    str2 += str1[i];
  }
  return str2;
}

string secondMethod()
{
  string str = "vansh";
  int start = 0, end = str.length()-1;
  while (start < end)
  {
    swap(str[start], str[end]);
    start++;
    end--;
  }

  return str;
}

int main()
{
  cout << fun() << endl;
  cout << secondMethod() << endl;
  return 0;
}