//1.
#include<stdio.h>
#include<stdlib.h>
//file reading
int main()
{
FILE *p;
char filename[250],c;
printf("enter filename\n");
scanf("%s",filename);
p=fopen(filename,"r");
if(p==NULL)
{
printf("no such file");
exit(0);
}
c=fgetc(p);
while(c!=EOF)
{
printf("%c",c);
c=fgetc(p);
}
fclose(p);
return 0;
}
