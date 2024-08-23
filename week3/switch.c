#include<stdio.h>
int main(){
char ch;
int a,b;
printf("enter the character:");
scanf("%c",&ch);
printf("enter the values of a and b:");
scanf("%d%d",&a,&b);
switch(ch)
{
 case '+':printf("addition=%d",a+b);
 break;
 case '-':printf("subtraction=%d",a-b);
 break;
 case '*':printf("multiplication=%d",a*b);
 break;
 case '/':printf("division=%d",a/b);
 break;
 case '%':printf("modulo=%d",a%b);
 break;
 default:
 printf("invalid");
 }
 return 0;
}
