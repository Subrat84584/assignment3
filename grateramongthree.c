//9.write the program to find the greatest among three number.prints the number ones if the greatest number appears two or three times.
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number");
	scanf("%d %d %d",&a,&b,&c);
	if(a>=b&&a>=c)
	{
		printf("%d is the greater",a);
	}
	if(b>=a&&b>=c)
	{
	printf("%d is the greater",b);	
	}
	if(c>=a&&c>=b)
	{
	printf("%d is the greater",c);		
	}
	return 0;
}
