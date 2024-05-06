#include<stdio.h>
int main()
{
     int a=2;
     void *ptr;
ptr= &a;
printf("After Typecasting, a = %d", *(int *)ptr);
     return 0;
}
