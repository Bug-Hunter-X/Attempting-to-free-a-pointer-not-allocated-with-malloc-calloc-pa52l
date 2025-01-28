#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int *)malloc(sizeof(int)); // Allocate memory dynamically
    if (ptr == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    *ptr = 20;
    printf("%d\n", *ptr); // Output: 20
    free(ptr); // Free the dynamically allocated memory
    ptr = NULL; // Set ptr to NULL to avoid dangling pointer
    return 0;
}