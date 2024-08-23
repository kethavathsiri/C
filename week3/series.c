#include<stdio.h>
#include<math.h>
int main()
{ 
 int n,x,i,t=-1;
 float s=1;
 printf("enter the values of x and n:");
 scanf("%d %d",&x,&n);
 for(i=1;i<=n;i++)
 {
  s=s+t*pow(x,i)/(2*i);
  t=t*(-1);
  }
  printf("%f",s);
  return 0;
}
  
 
