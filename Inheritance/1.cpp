#include <iostream>
using namespace std;

class Base
{
  int roll_no;
  string name;

public:
  void setData()
  {
    cout << "Enter Your Roll Number" << endl;
    cin >> roll_no;
    cout << "Enter Your name " << endl;
    cin >> name;
  }

  void getData()
  {
    cout << "Student roll number is " << roll_no << endl;
    cout << "Student name is " << name << endl;
  }
};

class Derived : public Base
{
public:
  void display()
  {
    setData();
    getData();
    cout << "This is display func";
  }
};

int main()
{
  Derived objD;
  objD.display();
  // Base objB;
  // objB.setData();
  // objB.getData();
}