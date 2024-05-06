#include<stdio.h>
void main()
{
    int n,i,search,f;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++){
        scanf("%d",arr[i]);
    }
    printf("\n Enter the number to be serched :");
    scanf("%d",&search);
    f=0;
for(i=0;i<n;i++){
if(arr[i]==search){
f=1;
break;
}
}
if(f==1){
printf("\n%d is present at index %d",search,i);
}
else{
printf("\n%d is not found in array",search);
}
}
