//PROGRAM TO FIND WEATHER THE GIVEN NUMBER IS PRIME OR NOT
#include<stdio.h>
#include<conio.h>
#include<process.h>
void main(){
	int n,i,flag=0;
	clrscr();
	printf("\nENTER A NUMBER ");
	scanf("%d",&n);
	if (n<=1){
		printf("\nWRONG INPUT");
		getch();
		exit(0);}
	else{
		for(i=2;i<=n/2;i++){
			if(n%i==0){
				flag=1;
				break;}
		}
		if(flag==0)
		printf("\n%d IS PRIME",n);
		else
		printf("\n%d IS NOT PRIME",n);}
	getch();
}
