//roman to decimal
#include<stdio.h>
#include<string.h>
int main(){
    int i;
    char r[100];
    printf("enter the string: ");
    gets(r);
    int l=strlen(r);
    for(i=0;i<l;i++){
        switch(r[i]){
            case 'I':r[i]=1;
            break;
            case 'V':r[i]=5;
            break;
            case 'X':r[i]=10;
            break;
            case 'L':r[i]=50;
            break;
        }

    }
    int k=r[l-1];
    for(i=l-1;i>0;i--){
    if(r[i]>r[i-1]){
        k=k-r[i-1];
    }
    else if(r[i]<=r[i-1]){
        k=k+r[i-1];
    } 
    }
    printf("%d",k);
}
