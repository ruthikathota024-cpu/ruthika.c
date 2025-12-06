#include<stdio.h>
int main()
{
	int i,n,a[20],key,found=0,position;
	printf("enter n value:");
	scanf("%d",&n);
	printf("enter array values:");
	for(i=0;i<n;++i)
{

	scanf("%d",&a[i]);
    }
printf("enter key value:");
scanf("%d",&key);
for(i=0;i<n;i++)
{
	if(key==a[i])
	{
	found=1;
	position=i;}
	
}
if(found==1)
{
	printf("element found at index %d",position);
	
}
else
{
printf("element not found");}
}
