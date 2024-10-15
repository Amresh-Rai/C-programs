#include<stdio.h>
int main(){
	char ch;
	printf("enter the character:");
	scanf("%c",&ch);
	switch(ch) 
	{
	
	case 'a':
	case 'e':
	case 'i':
    case 'o':
	case 'u':
	case 'A':
	case 'E':
	case 'I':
	case 'O':
	case 'U':
	printf("the character is vowel");
	break;
	default :
	printf("the character is consonant");
}
	return 0;
}
