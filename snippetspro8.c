#include <stdio.h>
int main ()
{
int a[3] = {10, 100, 200},n=3;
int i, *ptr[3];
for ( i = 0; i < 3; i++)
{
  ptr[i] = &a[i];
}
for ( i = 0; i < n; i++)
{
  printf("Value of a[%d] = %d\n", i, *ptr[i] );
}
return 0;
}
