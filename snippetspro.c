#include <stdio.h>
int main() {
int arr[5] = {10, 100, 200, 300, 500};
int *ptr;
ptr = &arr[4];
for (int i = 0; i<5; i++)
{
printf("Value of *ptr = %d\n", *ptr);
printf("address of *ptr = %d\n\n", ptr);
ptr-=2;
}
}
