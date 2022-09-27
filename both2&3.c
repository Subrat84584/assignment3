//13.write the program to check whether a given number is divisible by 3 and divisible by 2.
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if((a%3&&a%2)==0)
	{
		printf("%d is divisible by both 3 and 2",a);
	}
	else
	printf("%d is not divisible by both 3 and 2",a);
	return 0;
}
