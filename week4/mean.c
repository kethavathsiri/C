//2.mean,varaince,standard deviation and sorting

#include<stdio.h>
#include<math.h>
int main(){
int i,n,sum=0,temp,j,a[10];
float var=0,mean,sd;
printf("enter the array size:");
scanf("%d",&n);
//int a[i];
printf("enter the elements:");
for(i=0;i<n;i++){
scanf("%d",&a[i]);
 sum=sum+a[i];
 }
 printf("sum:%d\n",sum);
 mean=(float)sum/n;
 printf("mean:%f\n",mean);
 for(i=0;i<n;i++){
 var+=((pow(a[i]-mean,2))/n);
 sd=sqrt(var);
 }
 printf("variance:%f\n",var);
 printf("standard deviation:%f\n",sd);
 for(i=0;i<n;i++){
  for(j=i+1;j<n;j++){
   if(a[i]>a[j]){
    temp=a[i];
    a[i]=a[j];
    a[j]=temp;
 }
}

printf("%d\n",a[i]);
}
return 0;
}


 
 

