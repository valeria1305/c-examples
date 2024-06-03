#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // free(arr);
    
    // Incorrect: Using memory after it has been freed
    arr[0] = 1; // This leads to undefined behavior

    // Correct: Freeing memory after its usage
    free(arr);

    return 0;
}
