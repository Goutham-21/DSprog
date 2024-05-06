#include <stdio.h>

int main() {
    char *s[] = {"Hello", "world", "Education"};

    printf("String= %s\n", *s + 1);
    printf("String= %s\n", *(s + 2));
    printf("String= %s\n", (*(s + 2) + 3));

    return 0;
}
