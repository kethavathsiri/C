//count
#include<stdio.h>
#include<string.h>
int main(){
    int line=1,word=1,ch=0,i;
    char p;
    p='\0';
    char str[100];
    printf("enter the string: ");
    scanf("%[^*]",str);
    int l=strlen(str);
    for(i=0;i<l;i++){
      if(str[i]==' ' || str[i]=='\t' || str[i]=='\n')
       {
       if(p!=' ' && p!='\t' && p!='\n' && p!='\0')
       {
        word++;
       }
      }
      p=str[i];
      if(str[i]=='\n')
      {
        line++;
       }
     else if(str[i]>='A' && str[i]<='Z'||str[i]>='a' && str[i]<='z')
    {
    ch++;
    }
   }
    printf("words:%d\n",word);
    printf("character:%d\n",ch);
    printf("lines:%d\n",line);
    
}
