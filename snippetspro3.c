#include <stdio.h>
int main() {
  int arr[3] = {50, 150, 200};
  int *ptr;
  ptr = arr;
  for (int i = 0; i < 3; i++)
  {
       printf("Value of *ptr = %d\n",*ptr);
       printf("Address of *ptr = %d\n",ptr);
       ptr++;
  }
}
