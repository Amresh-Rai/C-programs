#include<stdio.h>
int main(){
	int n,sum=0,i;
	printf("the number of element in array is:");
	scanf("%d",&n);
	int arr[n];
	
	for(i=0;i<n;i++){
		printf("\nenter the elements into arr[%d]:",i,arr[n]);
		scanf("%d",&arr[i]);
		sum = sum + arr[i];
	}
	printf("\nthe sum of the elements are :%d",sum);
	return 0;
}
