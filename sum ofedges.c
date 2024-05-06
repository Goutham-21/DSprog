#include<stdio.h>
void main()
{
    int arr[3][3];
    int r=3,c=3,i,j,sum=0;
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            printf("%d",arr[i][j]);
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            if(i==0&&j==0 ||i==0&&j==c-1 ||i==r-1&&j==0 ||i==r-1&&j==c-1){
                printf("%d",arr[i][j]);
                sum+=arr[i][j];
            }
        }
    }
    printf("Corner Sum %d",sum);
}
