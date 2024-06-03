#include <stdio.h>
#include <stdlib.h>

#define SIZE 2
#define ROW_SIZE 3

int main() {
    int *b[SIZE]; // Array of 10 pointers to int

    // Dynamically allocate memory for each row
    for (int i = 0; i < SIZE; i++) {
        b[i] = malloc(ROW_SIZE * sizeof(int));
        if (b[i] == NULL) {
            printf("Memory allocation failed. Exiting.\n");
            // Free previously allocated memory before exiting
            for (int j = 0; j < i; j++) {
                free(b[j]);
            }
            return 1;
        }
    }

    // Prompt the user to enter integers for each element
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < ROW_SIZE; j++) {
            printf("Enter element at row %d, column %d: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    // Display the entered values
    printf("Values entered:\n");
    for (int i = 0; i < SIZE; i++) {
        for (int j = 0; j < ROW_SIZE; j++) {
            printf("%d ", b[i][j]);
        }
        printf("\n");
    }

    // Free the dynamically allocated memory
    for (int i = 0; i < SIZE; i++) {
        free(b[i]);
    }

    return 0;
}
