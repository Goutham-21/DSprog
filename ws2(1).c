#include<stdio.h>
void main(){
int n,i,j,temp;
printf("Enter the number of element :" );
scanf("%d",&n);
int arr[n];
for(i=0;i<n;i++){
    scanf("%d",&arr[i]);
}
for(i=0;i<n;i++){
    for(j=0;j<n;j++){
        if(arr[i]<arr[j]){
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
    }
}
printf("Ascending order :");
for(i=0;i<n;i++){
printf("%d",arr[i]);
}
printf("\nSecond largest element :%d",arr[n-2]);
}
