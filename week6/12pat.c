/*write to print the pattern
1
2 3
3 4 5
4 5 6 7*/
#include<stdio.h>
int main(){
int i,j,n;
printf("enter the number");
scanf("%d",&n);
for(i=1;i<=n;i++){
 for(j=0;j<i;j++){
 printf("%d ",i+j);
 }
 printf("\n");
 }
}
