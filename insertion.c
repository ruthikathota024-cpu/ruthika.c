#include<stdio.h>
int main()
{
	int i,a[10],n,pos,ele;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array elements:");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter position value:");
	scanf("%d",&pos);
	printf("enter element value:");
	scanf("%d",&ele);
	for(i=n;i>=pos;i--)
	{
		a[i+1]=a[i];
		
	}
	a[pos]=ele;
	printf("after insertion\n");
	for(i=0;i<=n+1;i++)
	{
		printf("%d\t",a[i]);
	}
}
