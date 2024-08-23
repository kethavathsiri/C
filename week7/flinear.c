#include<stdio.h>
void linear();
int main(){
printf("linear search\n");
linear();
}
void linear(){
int i,j,k,n,f;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
printf("enter the key to search the element:");
scanf("%d",&k);
for(i=0;i<n;i++){
if(k==a[i]){
f=1;
break;
}
}
if(f==1){
printf("element found at location %d",i);
}
else{
printf("element is not found");
}
}
