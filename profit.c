//10.write the program which takes the cost price and selling price of a product from user.Now calculate the percnetage of profit.
#include<stdio.h>
int main()
{
    int cost,sell;
	printf("enter your cost price:");
	scanf("%d",&cost);
	printf("enter your sell price");
	scanf("%d",&sell);
	if(cost<sell)
	{
		int profit=sell-cost;
		float profitpercent=(profit/cost)*100;
		printf("profit is:%d",profit);
		printf("profit percent is:%f",profitpercent);
	}
	if(cost>sell)
	{
		int loss=cost-sell;
		float losspercent=(loss/cost)*100;
		printf("your loss is:%d",loss);
		printf("loss percent is:%f",losspercent);
	}
	if(cost==sell)
	{
		printf("There is no profit and loss");
	}
	return 0;	
}  
