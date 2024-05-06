#include<stdio.h>
#include<string.h>
int main()
{
    char name[300],cr = 'l',ctr = 'a';
    printf("Enter the string :");
    gets(name);
    for(int i=0;i<strlen(name);i++){
        if(name[i]==cr){
            name[i] = ctr;
        }
    }
    printf("%s",name);
}
