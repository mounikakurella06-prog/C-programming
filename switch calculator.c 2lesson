#include<stdio.h>
int main()
{
	int a,b;
	char op;
	printf("enter two numbers:");
	scanf("%d%d",&a,&b);
	printf("enter operation:");
	scanf(" %c",&op);
	switch(op)
	{
		case '+':printf("%d+%d=%d\n",a,b,a+b);
		         break;
	    case '-':printf("%d-%d=%d\n",a,b,a-b);
		         break;
		case '*':printf("%d*%d=%d\n",a,b,a*b);
		         break;
		case '/':if(b!=0)
		        printf("%d/%d=%d\n",a,b,a/b);
		        else
		         printf("division by zero is not possible\n");
		         break;
		case '%':if(b!=0)
		        printf("%d%%%d=%d\n",a,b,a%b);
		         else
		         printf("modular division by zero is not possible\n");
	    default:printf("invalid operation\n");
	}
	return 0;
}
