#include <stdio.h>
int main() {
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d", &num2);
    scanf("%d",&num3);
    float num4 = (num1+num2+num3)/3.0;
    printf("Average: %.2f", num4);
    return 0;
}