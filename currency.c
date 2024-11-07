#include<stdio.h>
int main (){
	int amount;
	int count;
	printf("enter the amount is Rs:");
	scanf("%d",&amount);
	while (amount>0){
	switch(1){
		case 1:( count = amount/500);
	    if(count>0){
			printf("500 Rs notes are :%d\n",count);
		
			amount%=500;
}
		case 2:	(count = amount/200);
		if(count>0){
			printf("200 Rs notes are :%d\n",count);
			amount%=200;
	
	}
		case 3:( count = amount/100);
		if(count>0){
			printf("100 Rs notes are :%d\n",count);
			amount%=100;
		
		}
		case 4:	(count = amount/50);
		if(count>0){
			printf("50 Rs notes are :%d\n",count);
			amount%=50;
		
		}case 5:( count = amount/20);
		if(count>0){
			printf("20 Rs notes are :%d\n",count);
			amount%=20;
		
		}
		case 6:	(count = amount/10);
		if(count>0){
			printf("10  Rs notes are :%d\n",count);
			amount%=10;
		}
		    	case 7:( count = amount/5);
		if(count>0){
			printf("5 Rs notes are :%d\n",count);
			amount%=5;
		}
		case 8:	(count = amount/2);
		if(count>0){
			printf("2 Rs notes are :%d\n",count);
			amount%=2;
		 }
		    	case 9:( count = amount/1);
		if(count>0){
			printf("1 Rs notes are :%d\n",count);
	    	amount%=1;
	}
	break;
	default:
		printf("the amount is invalid");
		
	}	
	}
	
	
  	return 0 ;
    }
