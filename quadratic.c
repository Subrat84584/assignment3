//7.Write the program to check whether roots of a given quadratic equation are real & equal or imaaginary roots and distinct.
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c,D;
	float x,y;
	printf("enter the cofficient of x^2,x and constant");
	scanf("%d %d %d",&a,&b,&c);
	D=b*b-4*a*c;
	if(D<0)
	{
		printf("This is imaginary root");
	}
	if(D==0)
	{
		printf("This is equal root ");
		x=-b/(2*a);
		printf("The equal root is:%f",x);
	}
	if(D>0)
	{
		x=(-b+sqrt(D))/(2*a);
		y=(-b-sqrt(D))/(2*a);
		printf("The root is:%f",x);
		printf("The root is:%f",y);
	}
	return 0;
 } 
