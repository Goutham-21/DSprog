#include<stdio.h>
void main()
{
    int arr[30],i,n,sum=0;
    printf("Enter the number of element : ");
    scanf("%d",&n);
    printf("Enter the element :");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
        sum = sum+arr[i];
    }
    printf("\nThe sum of the array is: %d",sum);
}
