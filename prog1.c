#include<stdio.h>
#include<stdlib.h>
#include"mymath.h"
int main()
{
	double x,y;
	printf("enter the first number\n");
	scanf("%lf",&x);
	printf("enter the second number \n");
	scanf("%lf",&y);
	double res = myadd(x,y);
	printf("result is %lf",res);
	return 0;
}

