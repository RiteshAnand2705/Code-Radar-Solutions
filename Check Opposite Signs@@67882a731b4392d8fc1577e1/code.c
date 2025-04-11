#include <stdio.h>

int main() {
    int num1, num2;
    scanf("%d %d", &num1, &num2);
    if ((num1 ^ num2) < 0 || (num1 == 0 || num2 == 0)) {
        printf("True\n");
    } else if(num1 ^num2 == 1){
        printf("False\n");
    }

    return 0;
}