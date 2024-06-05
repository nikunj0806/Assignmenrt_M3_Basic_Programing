//Accept 5 numbers from user and find those numbers factorials
#include<stdio.h>
#include <stdio.h>

int main()
 {
    int numbers[5],factorials[5],j,i,n,f;
     

    
    printf("\n\n\t Enter 5 numbers:");
    for ( i = 0; i < 5; i++)
	 {
        printf("\n\n\t Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
     }

   
    for ( i = 0; i < 5; i++) 
		{
         n = numbers[i];
         f = 1;

        
        for ( j = 1; j <= n; j++)
		 {
            f *= j;
         }
        factorials[i] = f;
    }

    
    printf("\n\n\tFactorials of the entered numbers:");
    for ( i = 0; i < 5; i++) 
	{
        printf("\n\n\tFactorial of %d = %d", numbers[i], factorials[i]);
    }

    return 0;
}

