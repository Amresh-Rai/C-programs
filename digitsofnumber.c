#include<stdio.h>
int main (){
	int n, count =0;
	printf("enter the number:");
	scanf("%d", &n);
	while (n!=0)
	{
		n=n/10;
		count++;
	}
	printf("the no of digits are %d",count);
	
	return 0;
}
