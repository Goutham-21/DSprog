#include<stdio.h>
void main(){
    int num,i;
    printf("Enter the numbers :");
    scanf("%d",&num);
    int a[num];
    for(i=0;i<num;i++){
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++){
        printf("%d",a[i]);
    }
}
