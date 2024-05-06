#include <stdio.h>
#define MAX_SIZE 100

// Function to count pop operations for each element in the array
void countPopOperations(int stack[], int N, int array[], int output[]) {
    int top = -1; // Initialize top of the stack

    for (int i = 0; i < N; i++) {
        int count = 0;
        while (stack[top] != array[i]) {
            top--;
            count++;
        }
        top--; // Pop the matching element
        output[i] = count;
    }
}

int main() {
    int N = 5; // Size of the stack
    int stack[MAX_SIZE] = {6, 4, 3, 2, 1}; // Initial stack
    int array[] = {6, 3, 4, 1, 2}; // Array of elements
    int output[MAX_SIZE]; // Array to store the output

    countPopOperations(stack, N, array, output);

    // Display the output
    printf("Output: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", output[i]);
    }

    return 0;
}
