#include<stdio.h>
//ARITHEMATIC OPERATORS

void main(){
int a,b,c,d;
//int a=10,b=2,c=5,d=2;

printf("-------arithematic operator--------\n");
printf("enter the values of a b c and d: ");
scanf("%d%d%d%d",&a,&b,&c,&d);
printf("add=%d\n",a+b);
printf("sub=%d\n",a-b);
printf("mul=%d\n",a*b);
printf("div=%d\n",a/b);
printf("modu=%d\n",a%b);

//ASSIGNMENT OPERATORS
printf("--------assignment operators--------\n");
printf("%d\n",a=10);
printf("%d\n",c+=b);
printf("%d\n",d-=a);
printf("%d\n",c*=b);
printf("%d\n",a/=d);
printf("%d\n",c%=b);

//relational operator

printf("-------relational operators--------\n");

printf("%d\n",a>b);
printf("%d\n",a<b);
printf("%d\n",a<=b);
printf("%d\n",a>=b);
printf("%d\n",a==b);
printf("%d\n",a!=b);

//logical operators
//logical and lodical or  & logical not

printf("--------logical operators--------\n");
printf("%d\n",(a>b && a>c));
printf("%d\n",(a>b || a>c));
printf("%d\n",(a!=b));

//BITWISE OPERATORS
int e,g;
printf("enter the values of e and g: ");
scanf("%d%d",&e,&g);
printf("--------bitwise operator--------\n");
printf("%d\n",e&g);
printf("%d\n",e|g);
printf("%d\n",e^g);//if both are true it returns false and if atleast one is true then it returns true
printf("%d\n",~5);
printf("%d\n",212>>2);
printf("%d\n",212<<2);

//conditional operator

int x=1,y;
printf("---------conditional or ternary operator--------\n");
y=(x==1?2:0);
printf("x value:%d\n",x);
printf("y value:%d\n",y);

//increment and decrement operators
printf("-------increment and decrement operators----------\n");
int k,l,m;
printf("enter the values of k m l: ");
scanf("%d%d%d",&k,&m,&l);
printf("%d\n",++k);
printf("%d\n",m++);
printf("%d\n",--l);
printf("%d\n",k--);

//special operators
printf("-------special operators---------\n");
int *p,q;
char ch;
float f;
double u;
q=20;
p=&q;
printf("%d\n",*p);
printf("size of integer:%ld\n",sizeof(q));
printf("size of character:%ld\n",sizeof(ch));
printf("size of float:%ld\n",sizeof(f));
printf("size of double:%ld",sizeof(u));
}
