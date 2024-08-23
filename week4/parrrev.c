//reverse of an array using pointer
#include<stdio.h>
int main(){
 int i,n;
 printf("enter the size of an array:");
 scanf("%d",&n);
 int a[n];
 int *p;
 p=a;
 printf("enter the elements:");
 for(i=0;i<n;i++){
 scanf("%d",p+i);
 }
 printf("reverse of an array:\n");
 for(i=n-1;i>=0;i--){
 printf("a[%d]:%d\n",i,*(p+i));
 }
 
}
