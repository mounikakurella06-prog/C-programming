#include<stdio. h>
int main()
{
int n, i=1, esum=0, osum=0;
printf("enter a number: ");
scanf("%d",&n) ;
while(i <= n)
if(i%2 == 0)
esum=esum+i;
else
osum=osum+i;
i++;
printf("even sum=%d\n", esum) ;
printf("odd sum=%d\n", osum) ;
return 0;
}
