#include<stdio.h>
main()
{
	float n,cu,bill;
	printf("enter number of units consumed :");
	scanf("%f",&n);
{
		if(n<=50)
	cu=1;
	else if(n<=100)
	cu=1.50;
	else if(n<=150)
	cu=2;
	else if(n<=200)
	cu=2.5;
	else
	cu=3;}
	bill=n*cu;
	printf("the electricity bill is %f",bill);
}
