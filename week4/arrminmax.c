#include<stdio.h>
int main(){
int n,i,sum=0;
float ave;
printf("enter the array size: ");
scanf("%d",&n);
int a[n];
printf("enter the elements: ");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
 sum=sum+a[i];
 }
 printf("sum:%d\n",sum);
 ave=(float)sum/n;
 printf("average:%f\n",ave);
int min=a[0];
int max=a[0];
for(i=1;i<n;i++)
{
 if(a[i]<min)
 {
 min=a[i];
 }
 if(a[i]>max)
 {
 max=a[i];
 }
}
printf("min=%d\n",min);
printf("max=%d",max);


 
return 0;
}
