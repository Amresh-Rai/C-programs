#include<stdio.h>
int main(){
	int unit;
	float bill;
	printf("enter the unit of electricity used:");
	scanf("%d",&unit);
	switch(unit)
{
	 case 0 ...100:
		bill=unit*1;
		printf("total electricity bill is %f",bill);
		break;
	case 101 ...200:
		bill=((unit-100)*1.5)+100;
		printf("total electricity bill is %f",bill);
		break;
	default:
		bill=((unit-200)*2)+(100*1.5)+100;
		printf("total electricity bill is %f",bill);
		
	}
	return 0;
}
