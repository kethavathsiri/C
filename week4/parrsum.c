#include<stdio.h>
int main(){
 int i,n,sum=0;
 
 printf("enter the size of an array:");
 scanf("%d",&n);
 int a[n];
 int *p;
 p=a;
 
 printf("enter the elements: ");
 for(i=0;i<n;i++){
 scanf("%d",p+i);
 sum=sum+*(p+i);//*p refers to value at adddress
 // or p++ instead of add +i
 }
 printf("sum:%d\n",sum);
}
 
