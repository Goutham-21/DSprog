#include<stdio.h>
int main(){
int arr[20],n,sum=0,pos=0,neg=0,i;
printf("Enter the no of element");
scanf("%d",&n);
printf("Enter the array elements");
for(i=0;i<n;i++)
{
scanf("%d",arr[i]);
}
for(int i=0;i<n;i++){
sum = sum+arr[i];
if(arr[i]==0){
exit(0);
}
else if(arr[i]>0)
{
pos = pos+1;
}
else
{
neg = neg+1;
}
printf("The sum of the number :%d",sum);
printf("The no of positive number :%d",pos);
printf("The no of negative number :%d",neg);
}}
