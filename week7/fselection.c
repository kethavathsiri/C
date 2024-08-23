#include<stdio.h>
void selection();
int main(){
printf("selection sort\n");
selection();
}
void selection(){
int i,n,j,t,min;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=0;i<n-1;i++){
min=i;
for(j=i+1;j<n;j++){
if(a[min]<a[j]){
min=j;
}
}
t=a[i];
a[i]=a[min];
a[min]=t;
}
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
