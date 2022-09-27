//4.Write the program to cheack the given number is even number or odd number with out using % operator.
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if(a&1)
	{
		printf("your number is odd");
	}
	else 
	{
		printf("your number is even");
	}
	return 0;
}
