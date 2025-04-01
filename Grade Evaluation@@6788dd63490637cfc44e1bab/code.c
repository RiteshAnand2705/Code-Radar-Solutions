#include <stdio.h>
int main(){
char a ='A';
char b= 'B';
char c='C';
char d='D';
char grade;
scanf("%c",&grade);
if (grade=='a'){
    printf("Excellent");
    }
else if (grade=='b'){
    printf("Good");
    }
else if (grade=='c'){
    printf("Below Average");
    }
else if (grade=='d''){
    printf("Fail");
    }
else 
{
    printf("Invalid Grade");
}
return 0
}