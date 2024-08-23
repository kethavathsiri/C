#include<stdio.h>
int main()
{
 int n,sum=0,rem,s=0;
 
 printf("enter number: ");
 scanf("%d",&n);
 int t=n;//to check the original and reverse number are equal or not
 while(n!=0)
 {
  rem=n%10;
  sum=sum+rem;
  s=s*10+rem;
  n=n/10;
  }
  printf("sum of digits is %d\n",sum);
if(t==s)
 printf("%d is palindrome",t);
else
 printf("%d is not a palindrome",t);
return 0;
}


