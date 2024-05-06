#include<stdio.h>
int main(){
int CWork,WExam,total;
printf("Enter the CW Mark:");
scanf("%d",&CWork);
printf("Enter the WE Mark:");
scanf("%d",WExam);
total = CWork+WExam;
if(CWork>=20 && WExam>=20 && total>=44){
printf("You have passed with the mark of %d+%d = %d :" CWork,WExam,total);
}
else
printf("You have failed");
return 0;
}
