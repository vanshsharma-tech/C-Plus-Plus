#include <iostream>
using namespace std;
class student
{
  int phonenum;
  string studentname;
  int Id;

public:
  void setdata()
  {
    cout << "Enter the phone num:"<< endl;
    cin >> phonenum;
    cout << "Enter the student name:" << endl;
    cin >>studentname;
    cout<<"Enter the Id:"<<endl;
    cin>>Id;
  }
  void getdata(){
  cout<<"Student phone number:"<<phonenum<<endl;
  cout<<"Student name:"<<studentname<<endl;
  cout<<"Student Id:"<<Id<<endl;
  }
};
  class Drived : public student{
   public:
   void Nikku(){
    setdata();
    getdata();
   }
   
  };

  int main(){
  Drived obj;
  obj.Nikku();
  };
