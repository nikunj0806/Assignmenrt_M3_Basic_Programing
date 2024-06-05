//Write a program in C to count the total number of words in a string.
#include <stdio.h>
main()
{
    char str[78];
    int i,a=0;
	printf("\n\n\t Enter a string: ");
    scanf("%s",str);
    
    for (i=0;str[i]!=0;i++) 
	{
         a++;
    }
    printf("\n\n\t count the total number of words in a string %d",a);
}

