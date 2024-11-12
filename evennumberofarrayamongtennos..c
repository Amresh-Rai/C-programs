#include<stdio.h>
int main(){
	int i,A[10],c;
	for (i =0;i<10;i++)
	{
		printf("enter the elements into A=");
		scanf("%d",&A[i]);
	}
		for (i =0;i<10;i++)  
	{
	
		
	    if(A[i]%2==0)
	{
		printf("%d ",A[i]);
		c=c+1;
		
	}
    }
    printf("\n the total even number=%d",c);
	return 0;
    }
