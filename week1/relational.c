//relational operator
#include<stdio.h>
int main(){
int a,b,c;
printf("enter the values of a b and c:");
scanf("%d%d%d",&a,&b,&c);
printf("%d\n",a>b);
printf("%d\n",a<b);
printf("%d\n",a<=b);
printf("%d\n",a>=b);
printf("%d\n",a==b);
printf("%d\n",a!=b);

//logical operators
//logical and lodical or  & logical not
printf("%d\n",(a>b && a>c));
printf("%d\n",(a>b || a>c));
printf("%d\n",(a!=b));

//assignment operators

return 0;
}
