//8.write the program to check whether a given year is leap year or not.
#include<stdio.h>
int main()
{
	int year;
	printf("enter your year");
	scanf("%d",&year);
	if(year%400==0)
	{
		printf("%d is leap year",year);
	}
	else
	if(year%100==0)
	{
		printf("%d is not leap year",year);
	}
	else
	if(year%4==0)
	{
		printf("%d is leap year",year);
	}
	else{
		printf("%d is not leap year.",year);
	}
	
    return 0;
}
