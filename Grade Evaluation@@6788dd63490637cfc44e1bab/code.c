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
    printf("Average");
    }
else if (grade=='D'){
    printf("Below Average");
    }
else if (grade=='F'){
    printf("Fail");
    }
else 
{
    printf("Invalid grade");
}
return 0;
}