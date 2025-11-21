#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("%d&%d=%d\n",a,b,a&b);
	printf("%d|%d=%d\n",a,b,a|b);
	printf("~%d=%d\n",a,~a);
	printf("%d^%d=%d\n",a,b,a^b);
	printf("%d<<2=%d\n",a,a<<2);
	printf("%d>>2=%d\n",a,a>>2);
	return 0;
}
