#include <stdio.h>
int main()
{
    int n, rev = 0, r, m;
    printf("Enter a number: ");
    scanf("%d", &n);
    m = n;
    do 
	{
        r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    } 
	while (n != 0);
    if (m == rev)
        printf("%d is a palindrome number.\n", m);
    else
        printf("%d is not a palindrome number.\n", m);
    return 0;
}
