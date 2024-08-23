//logical and operator


#include<stdio.h>
int main(){
int x=3,y=4;
if(!(x>2)&&(y>1))
{
printf("!operator : both are true\n");
}
else{

printf("! Operator : Both conditions are true. " \
"But, status is inverted as false\n");
}
return 0;
}
