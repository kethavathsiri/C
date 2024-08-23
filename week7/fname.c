#include<stdio.h>
#include<string.h>
void namesort();
int main(){
printf("names sorting\n");
namesort();
}
void namesort(){
int i,j,n;
char a[10][10],t[10];
printf("enter number of names:");
scanf("%d",&n);
printf("enter names:");
for(i=0;i<n;i++){
scanf("%s",a[i]);
}
for(i=0;i<n;i++){
for(j=i+1;j<n;j++){
if(strcmp(a[i],a[j])>0)
{
strcpy(t,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],t);
}
}
}
printf("sorted order of names:\n");
for(i=0;i<n;i++){
printf("%s\n",a[i]);
}
}

