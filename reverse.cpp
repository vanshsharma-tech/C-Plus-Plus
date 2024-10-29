#include<iostream>
using namespace std;
int main(){
 int n,rem,ans=0;
 cout<<"Enter the Num:"<<endl;
 cin>>n;
 while (n!=0)
 {
  rem=n%10;
  ans=ans*10+rem;
  n=n/10;
 }
 cout<<ans;
 }