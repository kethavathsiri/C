#include<stdio.h>
#include<math.h>
int main()
{
 int n,x,s=1;
 printf("enter the values of x and n");
 scanf("%d %d",&x,&n);
 for(int i=1;i<=n;i++){
 s=s+pow(x,i);
  }
  printf("%d",s);
  return 0;
}
