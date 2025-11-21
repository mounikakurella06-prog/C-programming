#include<stdio.h>
int main()
{
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	if(n==1)
	printf("SUNDAY\n");
	else if(n==2)
	printf("MONDAY\n");
	else if(n==3)
	printf("TUESDAY\n");
	else if(n==4)
	printf("WEDNESDAY\n");
	else if(n==5)
	printf("THURSDAY\n");
	else if(n==6)
	printf("FRIDAY\n");
	else if(n==7)
	printf("SATURDAY\n");
	else
	printf("INVALID DAY>\n");
	return 0;
}
