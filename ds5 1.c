#include<stdio.h>
void main()
{
    int arr[3][3];
    int r=3,c=3,i,j;
    printf("Enter the elements in the matrix :");
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++){
        printf("\n");
        for(j=r-1;j>=0;j--){
            printf("%d ",arr[j][i]);
        }
        printf("\n");
    }
}
