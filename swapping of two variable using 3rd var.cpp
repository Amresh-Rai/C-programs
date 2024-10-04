#include<stdio.h>
int main(){
	int a,b,c;
	printf("enter the first variable:");
	scanf("%d",&a);
	printf("enter the second variable :");
	scanf("%d",&b);
	c=a;
	a=b;
	b=c;
	printf("the swapped variables are:%d\n%d",a ,b);
	
	
	return 0;
}
