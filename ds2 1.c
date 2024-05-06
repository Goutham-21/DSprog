#include<stdio.h>
void main()
{
    int n,i,max,min;
    printf("Enter the number of elements :");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    max = min = arr[0];
    for(i=1;i<n;i++){
    if(min>arr[i])
        min = arr[i];
    if(max<arr[i])
        max = arr[i];
}
    printf("The maximum element is :%d",max);
    printf("\nThe minimum element is :%d",min);
}
