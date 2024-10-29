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

class Derived 
{
  int p, c, m, totalMarks;

public:
  void input()
  {
    cout << "Enter Phy Marks" << endl;
    cin >> p;
    cout << "Enter Che Marks" << endl;
    cin >> c;
    cout << "Enter Math Marks " << endl;
    cin >> m;
    totalMarks = p+c+m;
  }
  void display()
  {
    cout << "phy marks " << p << endl;
    cout << "Che marks " << c << endl;
    cout << "maths marks " << m << endl;
    cout<<totalMarks;
  }
};

class derived1 : public Derived,public Base{
  public:
    void prinData(){
      setData();
      input();
      getData();
      display();
    }
};

int main()
{
  derived1 objD;
  objD.prinData();
}