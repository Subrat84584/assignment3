//6.Write the program to print the greater number between two number.print one if both the same.
#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the value of a and b");
	scanf("%d %d",&a,&b);
	a>=b?printf("greater is the: %d",a):printf("greater is the :%d",b);
	/*if(a==b)
	printf("the number is :%d",a);*/
	return 0;
}
