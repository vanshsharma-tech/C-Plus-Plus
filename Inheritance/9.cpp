#include <iostream>
using namespace std;

class base1
{
public:
  inline void Hello()
  {
    cout << "Hello world" << endl;
  }
};
class base2
{
public:
  inline void Hello()
  {
    cout << "Hello " << endl;
  }
};
class Drived :  public base2,public base1
{
  public:
    void getData(){
      // Hello();
    }
};
int main()
{
  Drived obj;
  obj.base1::Hello();
  obj.base2::Hello();
  return 0;
}