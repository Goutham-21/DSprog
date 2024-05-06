#include <stdio.h>

void concatenate(char *str1, char *str2) {
    // Move pointer to the end of the first string
    while (*str1) {
        str1++;
    }

    // Copy characters of the second string to the end of the first string
    while (*str2) {
        *str1 = *str2;
        str1++;
        str2++;
    }
    *str1 = '\0';  // Terminate the concatenated string
}

int main() {
    char string1[100], string2[50];

    // Input the strings
    printf("Enter the first string:\n");
    gets(string1);
    printf("Enter the second string:\n");
    gets(string2);

    // Concatenate the strings
    concatenate(string1, string2);

    // Display the concatenated string
    printf("Concatenated string: %s\n", string1);

    return 0;
}
