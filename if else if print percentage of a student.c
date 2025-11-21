#include<stdio.h>
int main()
{
	int per;
	printf("enter student percentage:");
	scanf("%d",&per);
	if(per>=90)
	printf("GRADE O\n");
	else if(per<90&&per>=80)
	printf("GRADE S\n");
	else if(per<80&&per>=70)
	printf("GRADE A\n");
	else if(per<70&&per>=60)
	printf("GRADE B\n");
	else if(per<60&&per>=50)
	printf("GRADE C\n");
	else if(per<50&&per>=40)
	printf("GRADE D\n");
	else
	printf("FAIL\n");
	return 0;
}
