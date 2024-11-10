#include<stdio.h>
int main (){
	int n,reverse=0,temp,sum,original;
	printf("enter the number :");
	scanf("%d",&n);
	original=n;
		while(n>0)
	{
	temp= n % 10;
	reverse=reverse*10; 
	reverse = reverse+temp;
		n=n/10;
				}
				sum=reverse+original;
	 printf("the sum of a number and its reverse is %d",sum);
	return 0;
}
