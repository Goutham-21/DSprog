#include<stdio.h>

int main()
{
    int a[3][3];
    int i,j,c=3,r=3,sum,c1=0,c2=0;
    printf("enter the elements of the matrix:");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
        printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    for(i=0;i<r;i++)
    {

        sum += a[i][i];
    }
    printf("sum of diagonal :%d",sum);
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            if(i==j){
                c1 = c1 + a[i][j];
            }
        }
    }
    printf("The sum of diagonal :%d",c1);
    for(i=0;i<r;i++){
        for(j=0;j<r;j++){
            if(i+j == r-1){
                c2 = c2+a[i][j];
            }
        }
    }
    printf("The sum of minor diagonal :%d",c2);
}
