/*Write a program in C to print individual characters of a string in reverse
order*/
#include <stdio.h>
main() 
{
    char str[10];
    int l,i;

    
    printf("\n\n\t Enter a string: ");
    scanf("%[^\n]", str);

    
     l= 0;
    while (str[l]!=0) 
	{
        l++;
    }

    
    printf("\n\n\t\t\t\t reverse");
    for (i =l-1;i>=0;i--)
	 {
        printf("\n\n\t %c ",str[i]);
    }

}

