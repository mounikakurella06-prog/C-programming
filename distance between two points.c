#include<stdio.h>
#include<math.h>
int main()
{
	int x1,y1,x2,y2;
	float d;
	printf("Enter first point (x1,y1):");
	scanf("%d%d",&x1,&y1);
	printf("Enter second point (x2,y2):");
	scanf("%d%d",&x2,&y2);
	d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	printf("Distance = %.2f\n",d);
	return 0;
}                       
