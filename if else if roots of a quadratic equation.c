//write a c program to find roots of a quadratic equation and also verify the roots are equal,distict or complex
#include<stdio.h>
#include<math.h>
int main()
{
	int a,b,c;
	float d,r1,r2;
	printf("enter a,b,c values:");
	scanf("%d%d%d",&a,&b,&c);
	d=b*b-4*a*c;
	if(d==0)
	{
	printf("roots are equal\n");
	r1=r2=-b/(2*a);
	printf("root1=%.2f\n",r1);
	printf("root2=%.2f\n",r2);
    }
	else if(d>0)
	{
		printf("roots are distinct\n");
		r1=(-b+sqrt(d)/(2*a));
		r2=(-b-sqrt(d)/(2*a));
		printf("root1=%.2f\n",r1);
	    printf("root2=%.2f\n",r2);
	}
	else
	{ 
	printf("roots are imaginary\n");
	}
	return 0;
}
