//16.write the program to check whether a given character is an alphabet(upercase),a alphabate(lowercase),a digit or a special character.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter your character");
	scanf("%c",&ch);
	if(ch>='A'&&ch<='Z')
	{
		printf("This is your upercase");
	}
	else
	if(ch>='a'&&ch<='z')
	{
		printf("This is your lowercase");
	}
	else
	printf("this is your digit or special digit");
	return 0;
	
}
