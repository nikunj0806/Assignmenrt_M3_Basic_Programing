//WAP to print table up to given numbers
#include<stdio.h>
main()
{
	int number,i;
	printf("\n\t Enter number :");
		scanf(" %d",&number);
	i=1;
	while(i<=10)
	{
		printf("\n\t %d * %d = %d",number,i,number*i);
		i++;
	}
	
}
