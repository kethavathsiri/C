#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void palindrome();
int main(){
    printf("string palindrome\n");
    palindrome();
}
void palindrome(){

    char str[100];
    printf("enter the string: ");
    scanf("%s",str);
    int h=strlen(str)-1;
    int l=0;
    while(h>l)
    {
        if(str[l++]!=str[h--]){
            printf("not palindrome");
            exit(0);
        }
    }
    printf("palindrome");
}
