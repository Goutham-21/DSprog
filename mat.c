#include<stdio.h>
int main()
{
    int a[3][3];
    int i,j,row=3,col=3;
    printf("Enter the elements of matrix");
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<col;j++){
            printf("%d",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
