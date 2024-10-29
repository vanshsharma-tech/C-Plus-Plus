#include <iostream>
using namespace std;

class Complex
{
private:
  float real;
  float imag;

public:
  Complex(float r = 0, float i = 0)
  {
    real = r;
    imag = i;
  }

  // Overload the + operator to add two Complex objects
  Complex operator+(Complex &other)
  {
    Complex temp;
    temp.real = this->real + other.real;
    temp.imag = this->imag + other.imag;
    return temp;
  }

  // Display function to print the complex number
  void display()
  {
    cout << real << " + " << imag << "i" << endl;
  }
};

int main()
{
  int x,y;
  int a,b;
  cout<<"Enter the real numbers";
  cin>>x>>y;

  cout<<"Enter the imaginery numbers"<<endl;
  cin>>a>>b;

  Complex c1(x, a);
  Complex c2(y, b);
  Complex c3 = c1 + c2; // Calls the overloaded + operator

  cout << "Result of c1 + c2: ";
  c3.display();
  return 0;
}
