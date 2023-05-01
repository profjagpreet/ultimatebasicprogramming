/*PROGRAM TO FIND AREA OF CIRCLE*/
#include    <stdio.h>
#include    <conio.h>
void main() {
    float radius, area;
    clrscr();
    printf("ENTER RADIUS OF CIRCLE = ");
    scanf("%f", &radius);
    area = (22.0/7) * radius * radius;
    printf("\nSUM OF TWO NUMBERS = %f", area);
    getch();
}