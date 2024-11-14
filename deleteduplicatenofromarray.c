#include<stdio.h>
int main(){
int arr[30],i,j,k,num;
printf("enter the number of element:");
scanf("%d",&num);
for(i=0;i<num;i++){
	printf("enter the element in arr[%d]:",i,num);
	scanf("%d",&arr[i]);
}
printf("\n enter the unique array:");
for(i=0;i<num;i++){
	for(j=i+1;j<num;)
	{
		if(arr[j]==arr[i])
{
	for(k=j;k<num;k++){
		arr[k]=arr[k+1];
	}
	num--;
		}
	else{
		j++;
	}
			
	}
}
	for(i=0;i<num;i++){
		printf("%d",arr[i]);
	}
	return 0;
}
