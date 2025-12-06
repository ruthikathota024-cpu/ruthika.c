#include<stdio.h>
main()
{
	int days,years,months,weeks;
	printf("enter days:");
	scanf("%d",&days);
	years=days/365;
	months=days/30;
	weeks=days/7;
	printf("years:%d\n months:%d\n weeks:%d",years,months,weeks);
	
}
