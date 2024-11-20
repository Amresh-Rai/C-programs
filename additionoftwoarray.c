#include<stdio.h>
int main (){
	 int a[3][3];
	 int b[3][3];
	 int c[3][3];
	 int m,n,i,j;
	 printf("enter the rows in the array :");
	 scanf("%d",&m);
	 printf("enter the column in the array :");
	 scanf("%d",&n);
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("elemets in the array a[%d][%d]:",i,j);
	 		scanf("%d",&a[i][j]);
	 		 }
		}
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("%d ",a[i][j]);
	 	}
	 	printf("\n");
	 }
	  for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("elemets in the array a[%d][%d]:",i,j);
	 		scanf("%d",&b[i][j]);
	 		 }
		}
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("%d ",b[i][j]);
	 	}
	 	printf("\n");
	 }
	 for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 c[i][j]=a[i][j]+b[i][j];
}
}
printf("the addition of the matrix is\n:); 
for(i=0;i<m;i++){
	 	for(j=0;j<n;j++){
	 		printf("%d ",c[i][j]);
	 	}
	 	printf("\n");
	 }

	return 0;
}
