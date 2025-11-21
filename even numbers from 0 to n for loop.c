#include<stdio.h>
int main()
{
int n,i;
printf("enter a number: ");
scanf("%d",&n);
for(i=0;i <= n;i++)
{
if(1%2 == 0)
printf("%d\t",i);
}
return 0;
}
