//PROGRAM TO CALCULATE SUM OF SERIES  1+(1/x)+(1/x^2)+....+(1/x^n)
#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<math.h>
void main(){
	int x,n,i;
	float sum=0;
	clrscr();
	printf("ENTER VALUE OF X ");
	scanf("%d",&x);
	if(x==0){
		printf("\nNOT POSSIBLE");
		getch();
		exit(0);}
	printf("\nENTER NUMBER OF TERMS ");
	scanf("%d",&n);
	if(n<=0){
		printf("\nNOT POSSIBLE");
		getch();
		exit(0);}
	else{
		for(i=0;i<n;i++){
		      sum=sum+(1/(pow(x,i)));}
		printf("\nSUM OF SERIES = %f",sum);}
	getch();
}
