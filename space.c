#include<stdio.h>
void main()
{
    int m=65;
    for(int i=0;i<7;i++){
        for(int j=1;j<5;j++){
            if(m<91)
            {
                printf("%c",m);
                m++;
            }
        }
        printf("\n");
    }
}
