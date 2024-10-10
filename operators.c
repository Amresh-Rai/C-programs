#include<stdio.h>
int main(){
	int a,b;
	char ch;
	printf("enter the two number :");
	scanf ("%d %d",&a ,&b);
	printf("enter the operator:");
	scanf(" %c",&ch);
	switch(ch)
	{
		case '+': 
		        printf("%d",a+b);
		        break;
			case '-':
				printf("%d",a-b);
				break;
				case '*':
					printf("%d",a*b);
					break;
				case '/':
					printf("%d",a/b);
					break;
					default: 
					 printf("invalid");
						
	}
	
	
	return 0;
}
