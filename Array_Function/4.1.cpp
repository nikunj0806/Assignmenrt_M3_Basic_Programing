/*Write a program to find out the max number from given array using
function*/
#include <stdio.h>
main() 
{
    int a[]= {1,45,89,54},size,max,i;

    size = sizeof(a)/sizeof(a[0]);
	max =a[0]; 
	
	for (i=1;i<size;i++)
	 {
        if (a[i] > max)
		 max = a[i];
    }
		 printf("\n\n\t  maximum number is: %d", max);

}

