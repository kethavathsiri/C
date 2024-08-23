//type conversions
#include<stdio.h>
int main(){
int a;
printf("enter a value:");
scanf("%d",&a);

float c=a;
printf("implicit: %f\n",c);
int b=(int)a;
printf("explicit: %d",b);
return 0;
}
