//15.Write the program to check whether a given number is positive ,negetive or zero.
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if(a>0)
	{
		printf("This number is positive");
	}
	else
	if(a<0)
	{
		printf("This number is negetive");
	}
	else
	if(a==0)
	{
		printf("This number is zero");
	}

	return 0;
}
