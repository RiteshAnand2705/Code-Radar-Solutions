#include <stdio.h>
int main() {
    int num, num2;
    
    scanf("%d", &num);
    scanf("%d", &num2);
    if (num <=0 && num2 <= 0) {
        printf("False");
    } else if (num > 0  && num2>0) {
        // Either number is zero or negative
        printf("True");
    }
    
    return 0;
}