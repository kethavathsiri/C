#include<stdio.h>
void numbers(int arr[],int);
int getchoice();
int smallest(int arr[],int);
int largest(int arr[],int);
int find_sum(int arr[],int);
float average(int arr[],int);
int main(){
 int n,choice;
 printf("enter the size:");
 scanf("%d",&n);
 int arr[n];
 numbers(arr,n);
 choice=getchoice();
 while(choice!=0)
 {
 printf("enter above 4 choices:");
 scanf("%d",&choice);
 switch(choice){
 case 1:printf("smallest number is %d\n",smallest(arr,n));
 break;
 case 2:printf("largest number is %d\n",largest(arr,n));
 break;
 case 3:printf("sum of all numbers %d\n",find_sum(arr,n));
 break;
 case 4:printf("average of all numbers %f\n",average(arr,n));
 break;
 default:printf("error:invalid choice\n");
 break;
 }
 }
 return 0;
 }
 
 void numbers(int arr[],int n){
 int i,sum=0;
 float avg;
 printf("enter numbers:");
 for(i=0;i<n;i++){
 scanf("%d",&arr[i]);
 }
 }
 int getchoice()
 {
 int choice;
 printf("\n-------Menu-------\n");
 printf("1.smallest number\n");
 printf("2.largest number\n");
 printf("3.sum of all number\n");
 printf("4.average of all numbers\n");
 }
 int smallest(int arr[],int n){
 int smallest,i;
 smallest=arr[0];
 for(i=1;i<n;i++){
 if(arr[i]<smallest){
 smallest=arr[i];
 }
 }
 return smallest;
 }
 int largest(int arr[],int n){
 int largest,i;
 largest=arr[0];
 for(i=1;i<n;i++){
 if(arr[i]>largest){
 largest=arr[i];
 }
 }
 return largest;
 }
 int find_sum(int arr[],int n){
 int sum=0,i;
 for(i=0;i<n;i++){
 sum=sum+arr[i];
 }
 return sum;
 }
 float average(int arr[],int n){
 int i;
 float average;
 int sum=find_sum(arr,n);
 return (float)sum/n;
 }
 
 
