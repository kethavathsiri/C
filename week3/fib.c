#include<stdio.h>
int main()
{
 int i;
 int a=0,b=1,c,n;
 printf("enter the value of n: ");
 scanf("%d",&n);
  for(i=0;i<n;i++)
  { 
   if(i<=1)
   {
    c=i;
    }
  else
   {
   c=a+b;
   a=b;
   b=c;
   }
  printf("%d\t",c);
  }
  return 0;
}
