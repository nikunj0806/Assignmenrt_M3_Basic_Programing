//Write a program in C to find the maximum number of characters in a string
#include <stdio.h>
int main()
{
    char str[10];
    int i, maxLength=0;
	printf("\n\n\t Enter a string: ");
    scanf("%s",str);
    for ( i=0;str[i]!=0;i++) 
	{
		maxLength++;
    }

    printf("\n\n\t Maximum number of characters in the string: %d", maxLength);

}

