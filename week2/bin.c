//write a program that shows the binary equivalent of a given positive number between 0 to 255

#include<stdio.h>
int main(){
int n,rem,bin=0,p=1;
printf("enter n value");
scanf("%d",&n);
while(n!=0){
rem=n%2;
n=n/2;
bin=bin+(rem*p);
p=p*10;
}
printf("%d",bin);

return 0;
}
