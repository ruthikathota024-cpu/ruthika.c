#include<stdio.h>
#include<math.h>
main()
{
	int x,y;
	float z;

	printf("enter x and y values:");
	scanf("%d %d",&x,&y);
	z=sqrt(x*x+y*y);
	printf("the hypotenuse value is %0.2lf",z);
	
}
