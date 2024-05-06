#include<stdio.h>
void main()
{
    int arr[3][3];
    int r=3,c=3,i,j,count = 0;
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
        for(j=0;j<c;j++){
            if(arr[i][j]==0){
                count+=1;
            }
        }
    }
    if(r*c/2<=count){
        printf("It is sparse matrix");
    }
    else{
        printf("Not a sparse matrix");
    }
}
