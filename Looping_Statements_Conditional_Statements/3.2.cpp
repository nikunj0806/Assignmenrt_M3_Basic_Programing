//WAP to accept 5 numbers from user and display all numbers
#include<stdio.h>
main()
{
	int i,number[5];
	
	
	for(i=1;i<=5;i++)
	{
		printf("\n\t Enter number :");
		scanf(" %d",&number[i]);
	}
	for(i=1;i<=5;i++)
	{
		printf("\n\n\t %d ",number[i]);
	}
	
}
