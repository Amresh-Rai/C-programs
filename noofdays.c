#include<stdio.h>
int main(){
	int ch;
	printf("enter the number of month:");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1:
	    case 3:
	    case 5:
		case 7:
		case 8:
		case 10:
		case 12:
		         printf("31 days");
		         break;
		case 2:
		         printf("28 days");
				 break;  
		case 4: 
		case 6:
		case 9:
		case 11:
		        printf("30 days");
				break;
		default:
				 printf("invalid");
				   		
	}
	
	return 0;
}
