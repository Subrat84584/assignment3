//12.Write a program to check whether given alphabet is in upercase or lowercase.
#include<stdio.h>
int main()
{
	char ch;
	printf("enter your charecter");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	{
		printf("char is lowercase");
	}
	if(ch>='A'&&ch<='Z')
	{
		printf("char is uppercase");
	}
	return 0;
}
