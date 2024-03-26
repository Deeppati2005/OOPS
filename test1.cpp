#include <iostream> //step 1 :
using namespace std;
class OddEven // step 2: class dec
{
public: // state
  int u, l;

public: // behavior
  void printOddNo(int low, int up)
  {
    for (int i = low; i <= up; i++)
    {
      if (i % 2 == 1)
      {
        cout << i << endl;
      }
    }
  }
};

int main()
{
  OddEven oe;
  oe.printOddNo(10, 20);
}