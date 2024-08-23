/*recursive
non recursive*/
#include<stdio.h>
int gcd(int n1,int n2);
int nonrecursive(int n1,int n2);
int main(){
int n1,n2;
printf("enter the two numbers:");
scanf("%d%d",&n1,&n2);
printf("gcd of %d and %d by using recursive is %d\n",n1,n2,gcd(n1,n2));
printf("gcd of %d and %d by using non-recursive is %d\n",n1,n2,nonrecursive(n1,n2));
}
int gcd(int n1,int n2){
if(n2!=0){
return gcd(n2,n1%n2);
}
else{
return n1;
}
}
int nonrecursive(int n1,int n2){
int temp;
while(n2!=0){//n1=4,n2=2
temp=n2;//temp=2
n2=n1%n2;//n2=0(rem)
n1=temp;//n1=2
}
return n1;
}










