//write a c program to check whether a given number is prime or not using for loop
#include<stdio.h>
int main()
{
	int n,i,counter=1;
	printf("enter a number:");
	scanf("%d",&n);
	if(n<=1)
	{
		counter=0;
	}
	else
	{
		for(i=2;i<n;i++)
		{
			if(n%i==0)
			{
				counter=0;
				break;
			}
		}
	}
	if(counter)
	printf("prime\n");
	else
	printf("not a prime\n");
	return 0;
}
