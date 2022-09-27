//2. write a program to check the program is divisible by 5 or not.
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if(a%5==0)
	{
		printf("The number is Divisible by 5");
	}
	else
	printf("This number is not Divisible by 5");
	return 0;
}
