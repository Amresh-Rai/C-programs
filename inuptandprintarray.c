#include<stdio.h>
int main()
{
	int i,j,m,n;
	int a[3][3];
	printf("enter the rows of array :");
	scanf("%d",&m);
		printf("enter the column of array :");
	scanf("%d",&n);
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("enter the elements in a[%d][%d]:",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
		
			printf("%d ",a[i][j]);
}

	printf("\n");
}
	return 0;
}
