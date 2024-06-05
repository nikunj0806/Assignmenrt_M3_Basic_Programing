#include <stdio.h>
main() 
{
    char str[20];
    int i,alphabets=0, digits=0, specialChars=0;
    printf("\n\n\t Enter a string: ");
    scanf("%s",str);

    
    for (i=0;str[i]!=0;i++) 
	{
        
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')) 
		{
            alphabets++;
        }
        
        else if (str[i] >= '0' && str[i] <= '9')
		{
            digits++;
        }
        
        else
		{
            specialChars++;
        }
    }

    
    printf("\n\n\t alphabets: %d",alphabets);
    printf("\n\n\t digits: %d",digits);
    printf("\n\n\t special characters: %d ",specialChars);

}

