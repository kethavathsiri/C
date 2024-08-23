/*write to print the pattern
1
2 2
3 3 3
4 4 4 4*/
#include<stdio.h>
int main(){
int i,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++){
 for(j=0;j<i;j++){
 printf("%d ",i);
 }
 printf("\n");
 }
 }
