#include<stdio.h>
int main (){
	int n,reverse=0,temp;
	printf("enter the number :");
	scanf("%d",&n);
		while(n>0)
	{
	temp= n % 10;
	reverse=reverse*10; 
	reverse = reverse+temp;
		n=n/10;
		}
	 printf("the reverse of the given number is %d",reverse);
	return 0;
}
