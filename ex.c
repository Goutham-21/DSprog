#include<stdio.h>
void main(){
    int num,num2,i,sum=0,j,temp;
    printf("Enter the numbers :");
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }
    printf("\n%d\n",sum);
    for(i=0;i<num;i++){
        printf("%d-->%d \n",i,a[i]);
    }
    printf("Enter the number to be search :");
    scanf("%d",&num2);
    printf("%d\n",a[num2]);
    for(i=0;i<num;i++){
        for(j=0;j<num;j++){
            if(a[i]<a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    for(i=0;i<num;i++){
        printf("\n%d",a[i]);
    }

    printf("\nsmallest value in the array :%d",a[0]);
    printf("\nLargest value in the array :%d",a[num-1]);
}

