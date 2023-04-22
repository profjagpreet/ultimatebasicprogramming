#include    <stdio.h>
#include    <conio.h>
void main() {
    int a,b,sum;
    clrscr();
    printf("ENTER FIRST NUMBER = ");
    scanf("%d", &a);
    printf("\nENTER SECOND NUMBER = ");
    scanf("%d", &b);
    sum = a+b;
    printf("\nSUM OF TWO NUMBERS = %d", sum);
    getch();
}