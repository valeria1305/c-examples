#include <stdio.h>
#include <stdlib.h>

int main() {
    int **arr = (int **)malloc(5 * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < 5; i++) {
        arr[i] = (int *)malloc(10 * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed\n");
            return 1;
        }
    }

    // Correct: Freeing each inner array first
    for (int i = 0; i < 5; i++) {
        free(arr[i]);
    }
    // Incorrect: Only freeing the outer array
    free(arr);

    return 0;
}
