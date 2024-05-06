#include<stdio.h>
int main(){
int age,weight;
printf("Enter the Age : ");
scanf("%d",&age);
printf("\nEnter the weight : ");
scanf("%d",&weight);
if(age>18 && age<56 && weight>45){
printf("You are eligible to Donate Blood");
}
else
printf("You are not eligible to donate blood");
return 0;}
