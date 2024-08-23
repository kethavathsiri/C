//2.

#include<stdio.h>
int main()
{
FILE *fp1,*fp2;
char ch;
fp1=fopen("file.txt","r");
fp2=fopen("fileupper.txt","w");
while((ch=getc(fp1))!=EOF)
{
if(ch>='a' && ch<='z')
{
ch=ch-32;
}
else if(ch>='A' &&ch<='Z')
{
ch=ch+32;
}
fputc(ch,fp2);
}
printf("content copied sucessfully");
fclose(fp1);
fclose(fp2);
}
