//5.write the program to cheack the number is three digit number or not.
#include<stdio.h>
int main()
{
	int a,count=1;
	printf("enter your number");
	scanf("%d",&a);
     while(count==2)
	   {
	   	int n=a/10;
	   	   count++;
		   }
		   if(count==2)
		   {
		   printf("this is my three digit number");
	         }
		   else
		   printf("this is my not three digit number");	
		   
		   return 0;
}
