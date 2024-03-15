#include <iostream>
using namespace std; // standard library

class car
{
public: // acess modifier
  // properties of classes
  string brand;
  string color;
  string speed;
  string weight;
  string series;
  int seat;

  void acc()
  {
    cout << "Acceleration Active" << endl;
  }
  void brake()
  {
    cout << "brake Active" << endl;
  }
  void sound()
  {
    cout << "Sound Active" << endl;
  }
};
int main()
{
  car m;
  m.brand = "marcediez";
  m.color = "red";
  m.speed = "100 KPH";
  m.weight = "20 Ton";
  m.series = "M101";
  m.seat = 6;

  car t;
  t.brand = "tesla";
  t.color = "black";
  t.speed = "120 KPH";
  t.weight = "10 Ton";
  t.series = "TW101";
  t.seat = 4;

  cout << "car brand : " << m.brand << endl;
  cout << "car color : " << m.color << endl;
  cout << "car speed : " << m.speed << endl;
  cout << "car weight : " << m.weight << endl;
  cout << "car series : " << m.series << endl;
  m.acc();
  m.brake();
  m.sound();
}