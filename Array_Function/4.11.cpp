/*WAP to accept 5 numbers from user and display in reverse order
using forloop and array*/
#include <stdio.h>

 main() {
    int n[5],i;

    printf("\n\n\t Enter 5 numbers:");
    for ( i=0;i<5;i++)
	 {
        printf("\n\n\tEnter number %d: ",i+1);
        scanf("%d",&n[i]);
    }

    
    printf("\n\n\t Numbers in reverse :");
    for (i=5;i>=0;i--) 
	{
        printf("\n\n\t %d ",n[i]);
    }
    printf("\n\t");

    
}


