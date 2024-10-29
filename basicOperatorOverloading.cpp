#include <iostream>
using namespace std;

class A
{
  int data;
  public:
    void getData(){
      cout<<"Enter the value"<<endl;
      cin>>data;
    }

    void display(){
      cout<<"date is "<<data<<endl;
    }

    A operator / (A obj1){
      A sum;
      sum.data = data / obj1.data;
      return sum;
    }

};

int main()
{
  A a,b,c;
  a.getData();
  b.getData();
  c = a/b;
  c.display();
}