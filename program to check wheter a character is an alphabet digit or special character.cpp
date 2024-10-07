 #include<stdio.h>
int main(){
char ch;
printf("enter the character:");
scanf("%s",&ch);
if  ((ch>='a'&& ch<='z')||(ch>='A'&& ch<='Z'))
{
	printf("the character is alphabet");
}
else 
{
	printf("the chracter is special character");
}	
	return 0;
}
