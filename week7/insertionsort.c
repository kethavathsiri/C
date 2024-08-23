#include<stdio.h>
int main(){
int i,n,j,k;
printf("enter the size of an array:");
scanf("%d",&n);
int a[n];
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
}
for(i=1;i<n;i++){
k=a[i];
j=i-1;
while(j>=0&&a[j]>k){
a[j+1]=a[j];
j--;
}
a[j+1]=k;
}
printf("after sorting:\n");
for(i=0;i<n;i++){
printf("%d\n",a[i]);
}
}
