#include<stdio.h>
void main()
{
    int arr[30],i,n,s,t[30];
    printf("Enter the no of array element :");
    scanf("%d",&n);
    printf("Enter the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++){
        printf("%d",arr[i]);
    }
    printf("Enter the left rotation index number :");
    scanf("%d",&s);
    int k=0;
    for(i=s-1;i<n;i++)
    {
        t[k] = arr[i];
        k++;
    }
    for(i=0;i<s;i++)
    {
        t[k] = arr[i];
        k++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d",t[i]);
    }

}
