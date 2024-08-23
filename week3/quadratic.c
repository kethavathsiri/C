#include<stdio.h>
#include<math.h>
int main(){
int a,b,c,D,r1,r2;

printf("enter the values of a,b,c: ");
scanf("%d %d %d",&a,&b,&c);
D=b*b-(4*a*c);
r1=(-b+sqrt(D))/(2*a);
r2=(-b-sqrt(D))/(2*a);
if(D<0)
{
  printf("Both roots are imaginary");
  }
else if(D==0){
  printf("Both roots are equal=%d %d",r1,r2);
  }
else if(D>0){
  printf("Roots are real and distrinct=%d %d",r1,r2);
  }
return 0;
}
