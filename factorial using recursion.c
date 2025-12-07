#include<stdio.h>
int fact(int);
int main()
{
	int n,factorial;
	printf("enter n value:");
	scanf("%d",&n);
	factorial=fact(n);
	printf("the factorial is %d",factorial);
	
}
int fact(int m)
{
	int f;
	if(m==0)
	{
		return 1;
	}
	f=m*fact(m-1);
	return f;
}
