#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf(" %c",&ch);
	if(ch>='A'&&ch<='Z')
	printf("uppercase\n");
	else if(ch>='a'&&ch<='z')
	printf("lowercase\n");
	else if(ch>='0'&&ch<='9')
	printf("digit\n");
	else
	printf("neither a digit nor alphabet\n");
	return 0;
}
