#include<stdio.h>
//void get(char* p)
//{
//    for(int i=0;i<5;i++)
//        scanf("%c",(p+i));
//}
void dis(char* d)
{
     for(int i = 0;i<5;i++)
        printf("%c ",*(d+i));
}
int main()
{
    char a[10];
    gets(a);
//    get(a);
    dis(a);
}
