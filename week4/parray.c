//array with pointer
#include<stdio.h>
int main(){
 int i,n;
 printf("enter the size of an array:");
 scanf("%d",&n);
 int a[n];
 int *p;
 p=a;// or p=&a
 printf("enter the elements:\n");
 for(i=0;i<n;i++){
 scanf("%d",p+i);//if we give only insted of p+i the first value will be repeted 
 }
 printf("\ndiplaying the values using array with pointer\n");
 for(i=0;i<n;i++){
 printf("%d\n",*(p+i));//we take *(p+i) insted of p+i because the value inside the data we want!
 }
}
 
