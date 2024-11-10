#include<stdio.h>
int main (){
	int n,ld ,sum =0;
	printf("enter the number :");
	scanf("%d",&n);
	while(n!=0)
	{
		ld=n%10;
		sum =sum +ld;
		n=n/10;
		 
		}
	 printf("the sum of digit of the given number is %d",sum);
	return 0;
}
