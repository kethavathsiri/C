/*power x^n with recursion
without recursion
*/
#include<stdio.h>
#include<math.h>
int power(int a,int b);
int nonrecursive(int a,int b);
int main(){
int a,b;
printf("enter two numbers:");
scanf("%d%d",&a,&b);
printf("power of %d and %d by using recursion is %d\n",a,b,power(a,b));
printf("power of %d and %d by using nonrecurison is %d\n",a,b,nonrecursive(a,b));
}
int power(int a,int b){
if(b==0){
return 1;
}
else{
return a*power(a,b-1);
}
}
int nonrecursive(int a,int b){
return pow(a,b);
}

