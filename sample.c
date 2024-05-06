#include <stdio.h>

int main() {
  int *ptr;
  int num;

  // Get the input from the user
  printf("Enter a number: ");
  scanf("%d", &num);

  // Store the address of the number in the pointer
  ptr = &num;

  // Print the number using the pointer
  printf("The number is: %d\n", *ptr);

  return 0;
}
