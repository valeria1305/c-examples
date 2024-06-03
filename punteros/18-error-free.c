#include <stdio.h>
#include <stdlib.h>

int main() {
    int *arr = (int *)malloc(10 * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Simulate usage of arr
    arr[0] = 1;

    // Forgot to free the allocated memory
    free(arr);

    return 0;
}

