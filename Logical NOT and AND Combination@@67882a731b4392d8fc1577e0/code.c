#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);

    // Check if neither of the numbers is greater than zero
    if (!(num1 > 0) && !(num2 > 0)) {
        printf("True");
    } else {
        printf("False");
    }

    return 0;
}