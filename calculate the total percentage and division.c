#include<stdio.h>
int main(){
	int roll,a,b,c;
	char l;
	printf("enter the name:");
	scanf("%s",&l);
	printf("enter the roll no:");
	scanf("%d",&roll);
	printf("enter a sub1:");
	scanf("%d",&a);
	printf("enter the sub2:");
	scanf("%d",&b)	;
	printf("enter the sub3:");
	scanf("%d",&c);
	int total=a+b+c;
	printf(" the total marks of all subject are :%d\n", total);
	float per=total/3;
	printf("the percentage of all subjects are:%f\n",per);
	
	if (per >= 80) {
        printf("First Grade\n");
    }
	 else if (per >= 60) {
        printf("Second Grade\n");
    } 
	else {
        printf("No Grade\n");
    }
	return 0;
}
