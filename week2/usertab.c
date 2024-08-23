#include<stdio.h>
int main(){
int n,i=1;
printf("enter which table do you want?");
scanf("%d",&n);
for(i=1;i<=10;i++){
printf("%d*%d=%d",n,i,n*i);
printf("\n");
}
return 0;
}
