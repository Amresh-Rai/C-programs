#include<stdio.h>
int main(){
	int side;
	printf("enter the sides:");
	scanf("%d",&side);
	switch(side)
	{ 
	case 3:
		printf("it is a triangle");
		break;
	case 4:
		printf("it is a quardilaterla");
		break;
		case 5:
			printf("it is pentagon");
			break;
			default:
				printf("invalid");
				
	}
	return 0;
}
