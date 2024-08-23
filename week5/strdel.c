#include<stdio.h>
#include<string.h>
int main(){
    int n,i,pos;
    char str[100];
    printf("enter the string: ");
    gets(str);
    printf("enter the position: ");
    scanf("%d",&pos);
    printf("enter the character to be deleted: ");
    scanf("%d",&n);
    int l=strlen(str);
    for(i=pos+n;i<l;i++){
        str[i-n]=str[i];

    }
    str[i-n]='\0';
    printf("%s",str);
}
