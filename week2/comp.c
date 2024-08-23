//compound intrest
#include<stdio.h>
#include<math.h>
int main(){
float p,t,r,a,ci;
printf("enter principle,time and rate:");
scanf("%f%f%f",&p,&t,&r);
a=p*pow((1+r/100),t);
ci=a-p;
printf("coumpoundIntrest=%f",ci);
return 0;
}
