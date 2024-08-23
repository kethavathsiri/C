//if character is present return 1 if it is not present return -1
#include<stdio.h>
#include<string.h>
int main(){
    int f,i;
    char str[100];
    char ch;
    printf("enter the string:");
    gets(str);
    printf("entet the characater:");
    scanf("%c",&ch);
    int l=strlen(str);
    for(i=0;i<l;i++)
    {
    if(ch==str[i])
     { 
        f=1;
        break;
     }}      
     if(f==1)   
     {
      printf("%d\n",i);
     }
     else
     {
     printf("%d\n",-1);
     }}
        
    

