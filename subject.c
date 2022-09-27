//11.write a program to take marks of 5 subjects from the user.Assume marks are given out of 100 and passing marks is 33.Now display whether the candiate passed the examination or failed.  
#include<stdio.h>
int main()
{
	float a,b,c,d,e;
	float totalmark=500;
	printf("enter the five subjct of a user");
	scanf("%f\n %f\n %f\n %f\n %f",&a,&b,&c,&d,&e);
	float obtainmark=a+b+c+d+e;
	float totalobtainpercent=obtainmark/totalmark*100;
	printf("Total percent obtain by :%f\n",totalobtainpercent);
	if(totalobtainpercent>=33)
	{
		printf("candidate is passed");
	}
	else
	printf("candidate is failed");
	return 0;
}
