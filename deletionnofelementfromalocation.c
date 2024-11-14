#include<stdio.h>
int main (){
	int arr[20],i,num,loc;
	printf("enter the no of element: ");
	scanf("%d",&num);
	
	for(i=0;i<num;i++){
		printf("enter the element in arr[%d] :",i ,num);
		scanf("%d",&arr[i]);
		
	}
	printf("location of the element to be deleted: ");
	scanf("%d",&loc);
	 
	 while (loc<num){
	 	arr[loc-1]=arr[loc];
	 	loc++;
	 }
	 num--;
	 for (i=0;i<num;i++){
	 	printf("\n %d",arr[i]);
	 	
	 }
	return 0;
}
