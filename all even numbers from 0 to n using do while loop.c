#include <stdio.h>
int main() 
{
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    int i = 0; 
    do 
	{
        if (i % 2 == 0) 
		{
            printf("%d\n",i);
        }
        i++; 
    } 
	while (i <= n); 
    printf("\n"); 
    return 0;
}
