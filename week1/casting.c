#include<stdio.h>
int main(){
int x;

int a;
char y='a';
printf("enter the values of x and a: ");
scanf("%d%d",&x,&a);
x=x+y;
float z=x+10.0;
float b=(float)a;

printf("auto conversion :x=%d,z=%f\n",x,z);
printf("casting :%f\n",b);

return 0;
}
