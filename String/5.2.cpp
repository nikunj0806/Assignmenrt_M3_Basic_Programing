//Write a program in C to separate individual characters from a string.
#include <stdio.h>
main()
{
    char str[78];
	printf("\n\n\t Enter a string: ");
    scanf("%s",str);
    
    printf("\n\n\t \t\t  Individual ");
    for (int i = 0; str[i] != '\0'; i++) {
        printf("\n\n\t %c ", str[i]);
    }
}

