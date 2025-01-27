#include <stdio.h>
int main() {
    char var1[50], var2[50];
    scanf("%49s",&var1);
    scanf("%49s",&var2);
    printf("%s and %s\n", var1, var2);
    return 0;
}