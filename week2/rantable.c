#include<stdio.h>

int main()

{

int n,x,i;

printf("enter the number which table do you want the table of: ");

scanf("%d",&n);

printf("enter the number till which you want the table of: ");

scanf("%d",&x);

for(i=1;i<=x;i++)

{

printf("%d * %d = %d\n",n,i,n*i);

}
return 0;
}
