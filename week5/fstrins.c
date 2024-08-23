#include<stdio.h>
#include<string.h>
void insertion();
int main(){
    printf("insertion of elements:\n");
    insertion();

}
void insertion(){
    int i,pos;
    char str1[100],str2[100],str3[100];
    printf("enter the string1:");
    gets(str1);
    printf("enter the string2:");
    gets(str2);
    printf("enter the position:");
    scanf("%d",&pos);
    int l1=strlen(str1);
    int l2=strlen(str2);
    if(pos<=l1){
        strncpy(str3,str1,pos);
        for(i=0;str2[i]!='\0';i++){
            str3[pos+i]=str2[i];
        }
        for(i=pos;str1[i]!='\0';i++){
            str3[i+l2]=str1[i];
        }
        str3[i+l2]='\0';
        printf("%s\n",str3);
}
}
    

