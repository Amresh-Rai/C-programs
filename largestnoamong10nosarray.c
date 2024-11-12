#include<stdio.h>
int main (){
	int i,A[10],l;
	for(i=0;i<10;i++){
		printf("enter the element into A =");
		scanf("%d",&A[i]);
	}
	l=A[0];
	for(i=1;i<10;i++){
		if(l<A[i]){
			l=A[i];
			
		}
     }
   printf("the largest num = %d",l);
   
	return 0;
}
