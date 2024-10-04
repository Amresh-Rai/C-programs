#include<stdio.h>
int main(){
	int C,F;
	printf("enter the tempertaure in celsius:");
	scanf("%d",&C);
	F=(9.0/5.0)*C+32;
	printf("the temperature in farenheit: %d\n", F);
	return 0;
}
