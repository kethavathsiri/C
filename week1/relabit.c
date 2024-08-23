#include<stdio.h>
//RELATIONAL OPERATORS

int main(){
int a=2,b=6,c=40,i;
for(i=0;i<2;i++)

printf("%d\n",a>b);
printf("%d\n",a<b);
printf("%d",a!=b);
printf("%d",a<=b);
printf("%d",a>=b);
printf("%d",a==b);

printf("%d\n%d\n",a&&b,a&&c);
printf("%d\n%d\n",a||b,a||c);
printf("%d\n",!(a&&b));
//bitwise operarator
printf("%d",i>>1);
printf("%d\n",a&b);
printf("%d\n",a|b);
printf("%d\n",a^b);
printf("%d\n",~5);


}
