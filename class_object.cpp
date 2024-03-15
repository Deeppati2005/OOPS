#include <iostream>
using namespace std;
class data
{
public:
  string name;
  int age;
  string city;
  long long pin;
};
int main()
{
  data d;
  d.name = "DEEP PATI";
  d.age = 19;
  d.city = "RANIGANJ";
  d.pin = 713347;
  cout << "Name : " << d.name << endl;
  cout << "Age : " << d.age << endl;
  cout << "City : " << d.city << endl;
  cout << "Pin : " << d.pin << endl;
}