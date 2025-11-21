#include<stdio.h>
int main()
{
int n,i=2, fact=1;
printf("enter a number: ");
scanf("%d",&n);
while(i <= n)
{
fact=fact*i;
i++;
}
printf("fact=%d\n", fact);
return 0;
}
