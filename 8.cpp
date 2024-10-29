#include<iostream>
using namespace std;

class base1{
  public:
   void main(){
    cout<<"How are you"<<endl;
  }
};   
class base2:
 virtual public base1{
   void main(){
    cout<<"kese ho aap";
  }
};
class Drived:public base2{
 public:
 void main(){
  base1::main();
 // base2::main();
 }
 
};
int main(){
  Drived obj;
  obj.main();
}

