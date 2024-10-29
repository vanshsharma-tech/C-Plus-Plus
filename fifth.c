#include <stdio.h>
void main (){
  int i,n,f=1;
  printf("Enter a number\n");
  scanf("%d",&n);
  for ( i = n; i >0 ; i--)
  {
    f=f*i;
  }
  printf("The factorial is %d",f);
}