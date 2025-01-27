#include <stdio.h>
int main() {
    char var1[100], var2[100];
    scanf("%149s",var1);
    scanf("%149s",var2);
    printf("%s and %s", var1, var2);
    return 0;
}