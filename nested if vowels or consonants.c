#include<stdio.h>
int main()
{
	char ch;
	printf("enter a character:");
	scanf("%c",&ch);
	if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
	{
		switch(ch)
		{
			case 'a':
			case 'A':
			case 'e':
			case 'E':							
			case 'i':
			case 'I':
			case 'o':
			case 'O':
			case 'u':
	    	case 'U':printf("given character is vowel\n");
					 break;
		    default:printf("given character is consonant\n");
		}
	}
	else
	printf("given character is not an alphabet\n");
	return 0;
}
