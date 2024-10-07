#include<stdio.h>
int main(){
	char ch;
	printf("enter the alphabet:");
	scanf("%s",&ch);
	if( (ch=='a')||(ch=='e')||(ch=='i') || (ch=='o')||(ch=='u')||(ch=='A')||(ch=='E')||(ch=='I')||(ch=='O')||(ch=='U')    )
    { 
    printf("the alphabet is vowel");

    }	
    else
    {
	printf("the alphabet is a consonant");
	}	
	
	
	return 0;
}
