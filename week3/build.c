//a.building problem


#include<stdio.h>
#include<math.h>
int main()
{

float t,a=9.8;
int s=30,u=0,f=10;

 while(f>0){
 t=sqrt((2*s)/a);
 printf("floor=%d,time=%f\n",f,t);
 f=f-1;
 s=s-3;
 }
return 0;
}
  

