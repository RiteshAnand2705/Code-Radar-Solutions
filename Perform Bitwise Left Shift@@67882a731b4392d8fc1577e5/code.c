#include <stdio.h>

int main() {
    scanf("%d", &num);
    scanf("%d", &shift);

// Perform left shift operation
    result = num << shift;
// Print the result
    printf("%d\n",result);

    return 0;
}