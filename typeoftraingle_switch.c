#include<stdio.h>
int main(){
	int s1,s2,s3,f;
	printf("enter the three sides of the traingle:");
	scanf("%d %d %d",&s1,&s2,&s3);
	f = (s1==s2) + (s2==s3) + (s3==s1);
	switch(f)
	{
	case 3: 
	printf("equileteral triangle");
	break;
	case 2:
	printf("isoceles traingle");
	break;
	default:
	printf("scalene triangle");
			
          
}

	return 0;
}
