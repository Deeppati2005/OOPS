#include <iostream>
using namespace std;
int main()
{
  int a, b, max;
  cout << "\n Enter 2 nos:";
  cin >> a >> b;
  if (a > b)
  {
    max = a;
  }
  else
  {
    max = b;
  }
  cout << "max =" << max;
}