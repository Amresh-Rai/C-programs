#include<stdio.h>
int main (){
	int n;
	printf("enter the number :");
	scanf("%d",&n);
	int product =1;
	int i;
	for ( i=1;i<=n;i++)
	{
		product=product*i;
	}
	
		
		printf("the factorial of the no is %d",product);
	return 0;
    }
