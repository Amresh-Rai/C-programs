#include<stdio.h>
int main (){
	int i,A[10],s;
	for(i=0;i<10;i++){
		printf("enter the element into A =");
		scanf("%d",&A[i]);
	}
	s=A[0];
	for(i=1;i<10;i++){
		if(s>A[i]){
			s=A[i];
			
		}
     }
   printf("the smallest num = %d",s);
   
	return 0;
}
