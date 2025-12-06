#include<stdio.h>
main()
{
	float cm,m,km;
	printf("enter length in cm :");
	scanf("%f",&cm);
	m=cm/100;
	km=cm/100000;
	printf("m:%f\n km:%f",m,km);
}
