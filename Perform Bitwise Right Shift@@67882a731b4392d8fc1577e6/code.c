#include <stdio.h>

int main() {
    int num, shift, result;
    scanf("%d", &num);
    scanf("%d", &shift);
// Perform right shift operation
    result = num >> shift;

    // Print the result
    printf("%d\n", result);

    return 0;
}