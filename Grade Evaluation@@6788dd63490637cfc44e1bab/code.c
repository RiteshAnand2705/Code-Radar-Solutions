#include <stdio.h>
int main(){
char a ='A';
char b= 'B';
char c='C';
char d='D';
char grade;
scanf("%c",&grade);
if (grade=='A'){
    printf("Excellent");
    }
else if (grade=='B'){
    printf("Good");
    }
else if (grade=='C'){
    printf("Below Average");
    }
else if (grade=='D'){
    printf("Fail");
    }
else 
{
    printf("Invalid Grade");
}
return 0;
}