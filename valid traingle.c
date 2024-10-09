#include<stdio.h>
int main(){

int a1,a2,a3,sum;
printf("enter the first angle :");
scanf("%d",&a1);
printf("enter the second angle :");
scanf("%d",&a2);
printf("enter the second angle :");
scanf("%d",&a3);
sum=a1+a2+a3;
if (sum==180)
{
	printf("the traingle is valid:");
}
else 
{
	printf("the traingle is not valid:");
}
return 0;
}
