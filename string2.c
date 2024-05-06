#include<stdio.h>
#include<string.h>
int main()
{
    char name[300];
    printf("Enter the string :");
    gets(name);
    for(int i=0;i<strlen(name);i++){
        for(int j=0;j<=i;j++){
            printf("%c",name[j]);
        }
        printf("\n");
    }
}
