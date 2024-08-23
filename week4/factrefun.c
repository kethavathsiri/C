/*recursive and non recursive */

#include<stdio.h>
int fact(int);
int nonrecursive(int);
int main(){
int n;
printf("enter the number:");
scanf("%d",&n);
printf("with recursive:%d is %d\n",n,fact(n));
printf("without recursive:%d is %d\n",n,nonrecursive(n));
}
int fact(int n){
if(n<=1)
{
return 1;
}

else{
return n*fact(n-1);
}
}
int nonrecursive(int n){
int i,fact=1;
for(i=1;i<=n;i++){
fact=fact*i;
}
return fact;
}


