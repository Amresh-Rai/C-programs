#include<stdio.h>
int main() 
{
	int a,b;
	printf("enter a first variable:");
	scanf("%d",&a);
	printf("enter a second variable:");
	scanf("%d",&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("the variables are swapped: %d\n%d",a ,b);
	return 0;
}
