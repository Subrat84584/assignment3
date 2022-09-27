//17.write a prgram which takes the length of the sides of a triangle as an input.display whether the triangle is valid or not.
#include<stdio.h>
int main()
{
	int AB,BC,CA;
	printf("enter the lenght of sides of a triangle");
	scanf("%d %d %d",&AB,&BC,&CA);
	if(AB==BC&&BC==CA&&CA==AB)
	{
		printf("This is valid Triangle");
	}
	else
	printf("This is not a valid Triangle");
	return 0;
	
}
