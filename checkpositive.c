// 1.write the program to check whether a given number is positive or non-positive.
#include<stdio.h>
int main()
{
	int a;
	printf("enter the given number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("The number is positive");
	}
	else
	{
		printf("The number is non-positive");
	}
	return 0;
}
