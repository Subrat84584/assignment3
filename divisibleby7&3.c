//14.write a program to check whether a given number is divisible by 7 or divisible by 3.
#include<stdio.h>
int main()
{
	int a;
	printf("enter your number");
	scanf("%d",&a);
	if((a%7)==0&&(a%3)==0)
	{
	    printf("%d number is divisible by 7 and 3",a);	
	}
	else
	printf("%d number is not divisible 7 and 3",a);
	return 0;
}
