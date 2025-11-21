//write a c program to find simple and compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float p,t,r,si,ci;
	printf("enter principle amount:");
	scanf("%f",&p);
	printf("enter time period:");
	scanf("%f",&t);
	printf("enter rate of interest:");
	scanf("%f",&r);
	si=(p*t*r)/100;
	ci=p*pow(1+r,t);
	printf("simple interest=%.2f\n",si);
	printf("compound interest=%.2f\n",ci);
	return 0;
}
