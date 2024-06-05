//Write a C Program to Print the Multiplication Table of N
#include<stdio.h>
main()
{
	int n=5,i;
	i=1;
	while(i<=10)
	{
		printf("\n\t %d * %d = %d",n,i,n*i);
		i++;
	}
}
